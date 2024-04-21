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


BinaryTreeNode<int>* buildTreeHelper(int *preorder, int *inorder, int preS, int preE, int inS, int inE){
    
    if(preS > preE || inS > inE){
        return NULL;
    }
    
    int rootData = preorder[preS];
    int rootIndex = -1;
    
    for(int i=0;i<=inE;i++){
        if(inorder[i] == rootData){
            rootIndex=i;
            break;
        }
    }
    
    int LpreS = preS+1;
    int LinS = inS;
    int LinE = rootIndex-1;
    int LpreE = (LinE-LinS) + LpreS;
    
    int RpreS = LpreE+1;
    int RinS = rootIndex+1;
    int RinE = inE;
    int RpreE = preE;
    
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
    
    root->left = buildTreeHelper(preorder, inorder, LpreS, LpreE, LinS, LinE);
    root->right = buildTreeHelper(preorder, inorder, RpreS, RpreE, RinS, RinE);
    
    return root;
}

BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
    return buildTreeHelper(preorder, inorder, 0, preLength-1, 0, inLength-1);
}

int main(){
  
  return 0;
}