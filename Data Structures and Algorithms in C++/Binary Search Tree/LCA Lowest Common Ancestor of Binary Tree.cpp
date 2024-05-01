#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
  T data;
  BinaryTreeNode<T> *left;
  BinaryTreeNode<T> *right;

  BinaryTreeNode(T data)
  {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

int getLCA(BinaryTreeNode<int> *root, int x, int y)
{
  if (root == NULL)
  {
    return -1;
  }

  if (root->data == x or root->data == y)
  {
    return root->data;
  }

  int a = getLCA(root->left, x, y);
  int b = getLCA(root->right, x, y);

  if (a != -1 and b == -1)
  {
    return a;
  }
  else if (a == -1 and b != -1)
  {
    return b;
  }
  else if (a == -1 and b == -1)
  {
    return -1;
  }
  else
  {
    return root->data;
  }
}

int main()
{

  return 0;
}