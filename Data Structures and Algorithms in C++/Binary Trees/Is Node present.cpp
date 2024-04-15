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

bool isNodePresent(BinaryTreeNode<int> *root, int x) {
    if(root==NULL){
        return false;
    }
    
    if(root->data == x){
        return true;
    }
    
    return isNodePresent(root->left, x) or isNodePresent(root->right, x);
}

int main(){
  
  return 0;
}