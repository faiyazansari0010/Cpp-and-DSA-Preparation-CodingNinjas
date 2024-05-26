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
    int childCount;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
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

    bool add(TrieNode *root, string word) {
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
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    void add(string word) {
        if (add(root, word)) {
            this->count++;
        }
    }
    
    bool isPalindrome(string str){
        int n=str.size()-1;
        for(int i=0;i<=n;i++){
            if(str[i] != str[n-i]){
                return false;
            }
        }
        return true;
    }
    
    bool checkPalindrome(TrieNode* parent, string word){
        if (parent->isTerminal || word.size() == 0)
            return true;
        
        if (parent->children[word[0] - 'a'] != NULL){
			return checkPalindrome(parent->children[word[0] - 'a'], word.substr(1));            
        }
        
        else{
			return false;            
        }
    }
    
    bool isPalindromePair(vector<string> words) {
                
        for(int i=0;i<words.size();i++){
            string str=words[i];
            reverse(str.begin(), str.end());
        	add(str);    
        }
        
        for(int i=0;i<words.size();i++){
            if(checkPalindrome(root, words[i])){
                return true;
            }
        }
        return false;
    }
};

int main(){
  
  return 0;
}