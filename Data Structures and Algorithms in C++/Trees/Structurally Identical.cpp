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

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    if(root1->children.size() != root2->children.size()){
        return false;
    }
    
    if(root1->data != root2->data){
        return false;
    }
    
    else{
        for(int i=0;i<root1->children.size();i++){
        	bool ans = areIdentical(root1->children[i], root2->children[i]);
            if(ans == false){
                return false;
            }
        }
    }
    return true;
}

int main(){
  
  return 0;
}