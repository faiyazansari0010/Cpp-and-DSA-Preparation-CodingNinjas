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

void helper(BinaryTreeNode<int> *root, int &sum)
{
  if (root == NULL)
    return;

  helper(root->right, sum);
  sum += root->data;
  root->data = sum;
  helper(root->left, sum);
}
void replaceWithLargerNodesSum(BinaryTreeNode<int> *root)
{
  int sum = 0;
  helper(root, sum);
}

int main()
{

  return 0;
}