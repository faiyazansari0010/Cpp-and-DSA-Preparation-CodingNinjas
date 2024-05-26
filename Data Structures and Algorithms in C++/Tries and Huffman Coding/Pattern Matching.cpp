#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <string>
#include <vector>

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
            // root->isTerminal = true;
            // return true;
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
    
    bool searchWord(TrieNode*root, string word) {

       if (word.size() == 0)
            return true;
        if (root->children[word[0] - 'a'] != NULL)
            return searchWord(root->children[word[0] - 'a'], word.substr(1));
        else
            return false;
    }
    
    bool searchWord(string word){
        return searchWord(root, word);
    }
    
    bool patternMatching(vector<string> vect, string pattern) {
        
        for(int i=0;i<vect.size();i++){
            string temp = vect[i];
            while(temp != ""){
				insertWord(temp);
                temp = temp.substr(1);
            }
        }
        
        return searchWord(pattern);
    }
};

int main(){
  
  return 0;
}