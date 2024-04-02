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

int getLargeNodeCount(TreeNode<int>* root, int x) {
    int ans = 0;
    if(root->data>x){
        ans+=1;
    }
    
    for(int i=0;i<root->children.size();i++){
        ans = ans + getLargeNodeCount(root->children[i], x);
    }
    return ans;
}

int main(){
  
  return 0;
}