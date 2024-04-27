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

void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }

  if (root->left != NULL and root->right == NULL)
  {
    cout << root->left->data << " ";
  }

  else if (root->right != NULL and root->left == NULL)
  {
    cout << root->right->data << " ";
  }

  printNodesWithoutSibling(root->left);
  printNodesWithoutSibling(root->right);
}

int main()
{

  return 0;
}