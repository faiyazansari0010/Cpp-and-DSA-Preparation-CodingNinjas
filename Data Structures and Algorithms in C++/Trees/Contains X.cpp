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

bool isPresent(TreeNode<int> *root, int x)
{
  if (root->data == x)
  {
    return true;
  }

  for (int i = 0; i < root->children.size(); i++)
  {

    bool ans = isPresent(root->children[i], x);

    if (ans == true)
    {
      return true;
    }
  }
  return false;
}

int main()
{

  return 0;
}