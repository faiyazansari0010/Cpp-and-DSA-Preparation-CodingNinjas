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

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{

  if (root == NULL)
  {
    return root;
  }

  TreeNode<int> *ans = root;
  int sum = 0;
  for (int i = 0; i < ans->children.size(); i++)
  {
    sum = sum + ans->children[i]->data;
  }

  for (int i = 0; i < ans->children.size(); i++)
  {
    TreeNode<int> *smallAns = maxSumNode(ans->children[i]);
    int
  }
}

int main()
{

  return 0;
}