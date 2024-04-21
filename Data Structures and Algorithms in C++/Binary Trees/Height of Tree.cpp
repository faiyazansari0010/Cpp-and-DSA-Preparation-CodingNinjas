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

int height(BinaryTreeNode<int>* root) {
    if(root == NULL){
        return 0;
    }
    
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    
    int h = max(leftHeight, rightHeight);
    return 1 + h;
}

int main(){

  return 0;
}