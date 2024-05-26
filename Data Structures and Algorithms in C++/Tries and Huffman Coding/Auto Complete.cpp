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
    
    void helper(vector<string> input, string pattern, string output){
        if(root->terminal == true){
            cout<<output<<endl;
            return;
        }
        
        TrieNode* child;
        int index = word[0]-'a';
        if(root->children[index] != NULL){
            output = output + word[0];
        	child =     
        }
    }
    
    void autoComplete(vector<string> input, string pattern) {
        if(!findWord(root, pattern)){
            return;
        }
        string output="";
        helper(input, pattern, output);
    }
};

int main(){
  
  return 0;
}