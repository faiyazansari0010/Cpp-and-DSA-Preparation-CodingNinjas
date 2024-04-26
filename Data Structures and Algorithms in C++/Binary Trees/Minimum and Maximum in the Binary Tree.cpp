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

#include <climits>
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    pair<int, int> ans;
    ans.first = INT_MAX;  // min
    ans.second = INT_MIN; // max
    return ans;
  }

  pair<int, int> leftAns = getMinAndMax(root->left);
  pair<int, int> rightAns = getMinAndMax(root->right);
  pair<int, int> ans;

  ans.first = INT_MAX;
  ans.second = INT_MIN;
  ans.first = min(ans.first, min(root->data, min(leftAns.first, rightAns.first)));
  ans.second = max(ans.second, max(root->data, max(leftAns.second, rightAns.second)));

  return ans;
}

int main()
{

  return 0;
}