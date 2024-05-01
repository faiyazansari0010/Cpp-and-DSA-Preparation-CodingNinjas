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

void insertDuplicateNode(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }

  int duplicate = root->data;
  BinaryTreeNode<int> *temp = root->left;
  BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(duplicate);
  root->left = node1;
  node1->left = temp;

  insertDuplicateNode(temp);
  insertDuplicateNode(root->right);
}

int main()
{

  return 0;
}