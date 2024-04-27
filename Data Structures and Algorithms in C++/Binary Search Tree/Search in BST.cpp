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

BinaryTreeNode<int> *helper(int *arr, int start, int end)
{
  if (start > end)
  {
    return NULL;
  }
  int mid = (start + end) / 2;

  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(arr[mid]);

  BinaryTreeNode<int> *leftTree = helper(arr, start, mid - 1);
  BinaryTreeNode<int> *rightTree = helper(arr, mid + 1, end);

  root->left = leftTree;
  root->right = rightTree;

  return root;
}

BinaryTreeNode<int> *constructTree(int *input, int n)
{
  return helper(input, 0, n - 1);
}

int main()
{

  return 0;
}