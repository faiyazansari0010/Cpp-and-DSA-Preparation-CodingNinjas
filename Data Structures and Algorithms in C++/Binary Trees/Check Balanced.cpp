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

class Pair
{
public:
  int height;
  bool balanced;

  Pair()
  {
    height = 0;
    balanced = true;
  }
};

Pair isBalancedHelper(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    Pair ans;
    return ans;
  }

  Pair ans;

  Pair leftAns = isBalancedHelper(root->left);
  Pair rightAns = isBalancedHelper(root->right);
  ans.height = 1 + max(leftAns.height, rightAns.height);

  if (leftAns.balanced == true and rightAns.balanced == true and abs(leftAns.height - rightAns.height) <= 1)
  {
    ans.balanced = true;
  }

  else
  {
    ans.balanced = false;
  }

  return ans;
}

bool isBalanced(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return true;
  }

  return isBalancedHelper(root).balanced;
}

int main()
{

  return 0;
}