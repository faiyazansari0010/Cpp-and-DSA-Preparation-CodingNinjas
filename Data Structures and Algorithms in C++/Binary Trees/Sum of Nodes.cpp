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

int getSum(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int lsum = getSum(root->left);
  int rsum = getSum(root->right);

  return lsum + rsum + root->data;
}

int main()
{

  return 0;
}