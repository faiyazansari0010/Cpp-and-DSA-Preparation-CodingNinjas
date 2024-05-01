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

class Quad
{
public:
  bool isItBST;
  int maximum;
  int minimum;
  int height;
};

Quad helper(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    Quad ans;
    ans.isItBST = true;
    ans.maximum = INT_MIN;
    ans.minimum = INT_MAX;
    ans.height = 0;
    return ans;
  }

  Quad leftAns = helper(root->left);
  Quad rightAns = helper(root->right);
  Quad answer;

  if (root->data > leftAns.maximum and root->data < rightAns.minimum and leftAns.isItBST and rightAns.isItBST)
  {
    answer.isItBST = true;
    answer.maximum = max(root->data, rightAns.maximum);
    answer.minimum = min(root->data, leftAns.minimum);
    answer.height = 1 + max(leftAns.height, rightAns.height);
    return answer;
  }

  else
  {
    answer.isItBST = false;
    answer.maximum = max(root->data, rightAns.maximum);
    answer.minimum = min(root->data, leftAns.minimum);
    answer.height = max(leftAns.height, rightAns.height);
    return answer;
  }
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
  return helper(root).height;
}

int main()
{

  return 0;
}