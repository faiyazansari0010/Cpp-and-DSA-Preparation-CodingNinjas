#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void postOrder(BinaryTreeNode<int> *root) {
	// Write your code here
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
	cout<<root->data<<" ";
}

int main(){
  
  return 0;
}