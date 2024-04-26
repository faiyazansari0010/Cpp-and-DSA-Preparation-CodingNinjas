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

BinaryTreeNode<int> *removeLeafNodes(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return NULL;
  }

  if (root->left == NULL and root->right == NULL)
  {
    return NULL;
  }

  BinaryTreeNode<int> *leftAns = removeLeafNodes(root->left);
  BinaryTreeNode<int> *rightAns = removeLeafNodes(root->right);

  root->left = leftAns;
  root->right = rightAns;
  return root;
}

int main()
{

  return 0;
}