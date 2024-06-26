#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

template <typename T>
class TreeNode
{
public:
  T data;
  vector<TreeNode<T> *> children;

  TreeNode(T data)
  {
    this->data = data;
  }

  ~TreeNode()
  {
    for (int i = 0; i < children.size(); i++)
    {
      delete children[i];
    }
  }
};

int getHeight(TreeNode<int>* root) {
	
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        
        int max = getHeight(root->children[i]);
        
    	if(max>ans){
            ans=max;
        }    
    }
    return ans+1;
}

int main(){
  
  return 0;
}