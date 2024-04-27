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

void elementsInRangeK1K2(BinaryTreeNode<int> *root, int min, int max)
{
  if (root == NULL)
  {
    return;
  }

  if (root->data >= min and root->data <= max)
  {
    elementsInRangeK1K2(root->left, min, max);
    cout << root->data << " ";
    elementsInRangeK1K2(root->right, min, max);
  }

  else if (root->data > min and root->data > max)
  {
    elementsInRangeK1K2(root->left, min, max);
  }

  else if (root->data < min and root->data < max)
  {
    elementsInRangeK1K2(root->right, min, max);
  }
}

int main()
{

  return 0;
}