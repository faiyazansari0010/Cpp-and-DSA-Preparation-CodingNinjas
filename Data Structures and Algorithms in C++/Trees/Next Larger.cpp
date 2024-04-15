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


TreeNode<int>* getNextLargerElement(TreeNode<int>* root, int x) {
    if(root==NULL){
        return root;
    }
    
    else if(root -> children.size() == 0){
    	if(root -> data > x){
            return root;
        }
        else{
            return NULL;
        }
    }
	
    else{
        TreeNode<int>* ans=NULL;
    
    	if(root->data > x){
        	ans = root;
    	}
    
    	for(int i=0;i<root->children.size();i++){
        	TreeNode<int>* temp = getNextLargerElement(root->children[i], x);
        		if(ans==NULL or ans->data > temp->data){
                	ans=temp;
            	}
    		}
    	 		return ans;
   	 	}
    
}

int main(){
  
  return 0;
}