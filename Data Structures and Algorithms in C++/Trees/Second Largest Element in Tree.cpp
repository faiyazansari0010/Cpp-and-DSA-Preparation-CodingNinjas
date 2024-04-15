#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class TreeNode
{
public:
  T data;
  vector<TreeNode<T> *> children;

  TreeNode(T data) { this->data = data; }

  ~TreeNode()
  {
    for (int i = 0; i < children.size(); i++)
    {
      delete children[i];
    }
  }
};

#include <utility>
pair<TreeNode<int> *, TreeNode<int> *> getSecondLargestNodeHelper(TreeNode<int> *root)
{
  if (root == NULL)
  {
    pair<TreeNode<int> *, TreeNode<int> *> ans;
    ans.first = NULL;
    ans.second = NULL;
  }

  pair<TreeNode<int> *, TreeNode<int> *> ans;
  ans.first = root;
  ans.second = NULL;
  for (int i = 0; i < root->children.size(); i++)
  {
    pair<TreeNode<int> *, TreeNode<int> *> recAns = getSecondLargestNodeHelper(root->children[i]);
    if (recAns.first->data > ans.first->data)
    {
      if (recAns.second == NULL)
      {
        ans.second = ans.first;
        ans.first = recAns.first;
      }
      else
      {
        if (recAns.second->data > ans.first->data)
        {
          ans.second = recAns.second;
          ans.first = recAns.first;
        }
        else
        {
          ans.second = ans.first;
          ans.first = recAns.first;
        }
      }
    }
    else
    {
      if (recAns.first->data != ans.first->data && (ans.second == NULL || ans.second->data < recAns.first->data))
      {
        ans.second = recAns.first;
      }
    }
  }
  return ans;
}

TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
  return getSecondLargestNodeHelper(root).second;
}

int main()
{

  return 0;
}