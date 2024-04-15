#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

template <typename T>
class TreeNode {
   public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode() {
        for (int i = 0; i < children.size(); i++) {
            delete children[i];
        }
    }
};

void helper(TreeNode<int>* root, int k) {
    if(root==NULL){
        return;
    }
    
    // else if(root->children.size() == 0){
    //     root->data = 0;
    //     return;
    // }
    
    else{
        root->data = k;
        
        for(int i=0;i<root->children.size();i++){
            helper(root->children[i], k+1);
        }
    }
}

void replaceWithDepthValue(TreeNode<int>* root){
    helper(root, 0);
}

int main(){
  
  return 0;
}