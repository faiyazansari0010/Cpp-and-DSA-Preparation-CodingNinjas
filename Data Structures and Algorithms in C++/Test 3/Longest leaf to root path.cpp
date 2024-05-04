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

vector<int> *longestPath(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    vector<int> *output = new vector<int>();
    // output->push_back(NULL);
    return output;
  }

  vector<int> *output1 = new vector<int>();
  vector<int> *output2 = new vector<int>();

  output1 = longestPath(root->left);
  output2 = longestPath(root->right);

  if (output1->size() > output2->size())
  {
    output1->push_back(root->data);
    return output1;
  }

  else if (output1->size() < output2->size())
  {
    output2->push_back(root->data);
    return output2;
  }

  else
  {
    output1->push_back(root->data);
    return output1;
  }
}

int main()
{

  return 0;
}