#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	if(root==NULL){
        return NULL;
    }
    
    if(root->data == data){
        vector<int>* ans = new vector<int>();
        ans->push_back(root->data);
        return ans;
    }
    
    vector<int>* left = getPath(root->left, data);
    if(left != NULL){
        left->push_back(root->data);
        return left;
    }
    
    vector<int>* right = getPath(root->right, data);
    if(right != NULL){
        right->push_back(root->data);
        return right;
    }
    else{
        return NULL;
    }
}

int main(){
  
  return 0;
}