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

void printLevelWise(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }

  queue<BinaryTreeNode<int> *> nodes;
  nodes.push(root);
  nodes.push(NULL);

  while (nodes.size() != 0)
  {
    BinaryTreeNode<int> *front = nodes.front();
    nodes.pop();

    if (front == NULL)
    {
      cout << endl;
      if (nodes.size() != 0)
      {
        nodes.push(NULL);
      }
    }

    else
    {
      cout << front->data << " ";

      if (front->left != NULL)
      {
        nodes.push(front->left);
      }
      if (front->right != NULL)
      {
        nodes.push(front->right);
      }
    }
  }
}

int main()
{

  return 0;
}