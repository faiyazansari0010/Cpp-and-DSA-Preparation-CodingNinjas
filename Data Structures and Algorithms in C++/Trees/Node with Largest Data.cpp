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

TreeNode<int> *maxDataNode(TreeNode<int> *root)
{

  TreeNode<int> *max = root;

  for (int i = 0; i < root->children.size(); i++)
  {

    TreeNode<int> *node = maxDataNode(root->children[i]);

    if (node->data > max->data)
    {
      max = node;
    }
  }
  return max;
}

int main()
{

  return 0;
}