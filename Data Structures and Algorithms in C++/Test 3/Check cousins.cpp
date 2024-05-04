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

int distance(BinaryTreeNode<int> *root, int p)
{
  if (root == NULL)
  {
    return -1;
  }
  if (root->data == p)
  {
    return 0;
  }
  int ld = distance(root->left, p);
  if (ld != -1)
  {
    return 1 + ld;
  }

  int rd = distance(root->right, p);
  if (rd != -1)
  {
    return rd + 1;
  }

  return -1;
}

bool isSibling(BinaryTreeNode<int> *root, int p, int q)
{
  if (root == NULL)
  {
    return false;
  }
  if (root->left != NULL and root->right != NULL)
  {
    if ((root->left->data == p and root->right->data == q) or (root->left->data == q and root->right->data == p))
    {
      return true;
    }
  }

  bool leftAns = isSibling(root->left, p, q);
  bool rightAns = isSibling(root->right, p, q);

  if (leftAns || rightAns)
  {
    return true;
  }

  else
  {
    return false;
  }
}

bool isCousin(BinaryTreeNode<int> *root, int p, int q)
{
  if (root == NULL)
  {
    return false;
  }

  if (root->data == p or root->data == q)
  {
    return false;
  }

  int pDist = distance(root, p);
  int qDist = distance(root, q);
  bool sib = isSibling(root, p, q);

  if (pDist == qDist and !(sib))
  {
    return true;
  }
  return false;
}

int main()
{

  return 0;
}