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

class isBstReturn{
    public:
    bool isItBst;
    int minimum;
    int maximum;
};

isBstReturn isBST2(BinaryTreeNode<int>* root){
    if(root==NULL){
        isBstReturn output;
        output.isItBst = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }
    
    isBstReturn leftAns = isBST2(root->left);
    isBstReturn rightAns = isBST2(root->right);
    
    int leftMax = leftAns.maximum;
    int rightMin = rightAns.minimum;
    
    bool smallOutput = (root->data > leftMax and root->data <= rightMin);
    
    bool finalAnswer = (smallOutput and leftAns.isItBst and rightAns.isItBst);
    
    isBstReturn output;
    output.isItBst = finalAnswer;
    output.minimum = min(rightMin, min(leftAns.minimum, root->data) );
    output.maximum = max(leftMax, max(rightAns.maximum, root->data) );
    
    return output;
}

bool isBST(BinaryTreeNode<int> *root){
     return isBST2(root).isItBst;
}



// solution 2:

int minimum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return INT_MAX;
    }
    
    int leftMin = minimum(root->left);
    int rightMin = minimum(root->right);
    
    return min(root->data, min(leftMin, rightMin));
}

int maximum(BinaryTreeNode<int> *root){
    if(root==NULL){
        return INT_MIN;
    }
    
    int leftMax = maximum(root->left);
    int rightMax = maximum(root->right);
    
    return max(root->data, max(leftMax, rightMax));
}

bool isBST(BinaryTreeNode<int> *root) {
	if(root==NULL){
        return true;
    }
    
    int leftMax = maximum(root->left);
    int rightMin = minimum(root->right);
    
    bool smallAns = (root -> data > leftMax && root -> data <= rightMin);
    
    bool leftAns = isBST(root->left);
    bool rightAns = isBST(root->right);
    
    return smallAns and leftAns and rightAns;
}

int main(){
  
  return 0;
}