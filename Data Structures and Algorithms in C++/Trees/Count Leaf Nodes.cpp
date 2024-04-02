#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
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

int getLeafNodeCount(TreeNode<int> *root)
{
  if (root->children.size() == 0)
  {
    return 1;
  }

  else
  {
    int ans = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
      ans = ans + getLeafNodeCount(root->children[i]);
    }
    return ans;
  }
}

int main()
{

  return 0;
}