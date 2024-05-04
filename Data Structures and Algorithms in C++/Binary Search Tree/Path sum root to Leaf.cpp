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

void helper(BinaryTreeNode<int> *root, int k, vector<int> v)
{
  if (root == NULL)
  {
    return;
  }

  if (root->left == NULL and root->right == NULL)
  {
    if (root->data == k)
    {
      for (int i = 0; i < v.size(); i++)
      {
        cout << v[i] << " ";
      }
      cout << root->data << endl;
    }
    return;
  }

  v.push_back(root->data);
  helper(root->left, k - root->data, v);
  helper(root->right, k - root->data, v);
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
  vector<int> v;
  helper(root, k, v);
}

int main()
{

  return 0;
}