#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }

    bool findWord(TrieNode* root, string word){
        if(word.size()==0){
            return root->isTerminal;
        }
        
        int index = word[0]-'a';
        if(root->children[index] == NULL){
            return false;
        }
        TrieNode* child = root->children[index];
        return findWord(child, word.substr(1));
    }
    
    void searchPrint(TrieNode* root, string pattern, string output){
        if(pattern.size() == 0){
            if(root->isTerminal == true){
                cout<<output<<endl;
            }
            
            for(int i=0;i<26;i++){
                if(root->children[i] != NULL){
                    searchPrint(root->children[i], pattern, output + root->children[i]->data);
                }
            }
        }
        
        else if(root->children[pattern[0] - 'a'] != NULL){
            searchPrint(root->children[pattern[0] - 'a'], pattern.substr(1), output+pattern[0]);
        }
    }
    
    void autoComplete(vector<string> input, string pattern) {
        for (int i = 0; i < input.size(); i++){
            insertWord(input[i]);
        }  
        searchPrint(root, pattern, "");
    }
};