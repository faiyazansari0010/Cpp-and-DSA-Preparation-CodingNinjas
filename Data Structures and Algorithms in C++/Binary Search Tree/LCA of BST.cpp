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
  ~BinaryTreeNode()
  {
    if (left)
      delete left;
    if (right)
      delete right;
  }
};

int getLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
  if (root == NULL)
  {
    return -1;
  }
  if (root->data == val1 or root->data == val2)
  {
    return root->data;
  }
  if ((val1 < root->data and val2 > root->data) or (val1 > root->data and val2 < root->data))
  {
    return root->data;
  }

  int a, b;
  if (val1 < root->data and val2 < root->data)
  {
    a = getLCA(root->left, val1, val2);
  }

  else if (val1 > root->data and val2 > root->data)
  {
    b = getLCA(root->right, val1, val2);
  }

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
}

int main()
{

  return 0;
}