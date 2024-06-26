#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

// Following is the structure for the TreeNode class

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

int sumOfNodes(TreeNode<int> *root)
{

  int ans = root->data;
  for (int i = 0; i < root->children.size(); i++)
  {
    ans += sumOfNodes(root->children[i]);
  }
  return ans;
}

int main()
{

  return 0;
}