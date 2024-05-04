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

void populate(BinaryTreeNode<int> *root, vector<int> &data)
{
  if (root == NULL)
  {
    return;
  }

  data.push_back(root->data);
  populate(root->left, data);
  populate(root->right, data);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int sum)
{
  vector<int> data;

  populate(root, data);

  sort(data.begin(), data.end());

  int i = 0, j = data.size() - 1;

  while (i < j)
  {
    if (data[i] + data[j] == sum)
    {
      cout << data[i] << " " << data[j] << endl;
      ++i;
      --j;
    }

    else if (data[i] + data[j] > sum)
    {
      --j;
    }

    else
    {
      ++i;
    }
  }
}

int main()
{

  return 0;
}