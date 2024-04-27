#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

#include <stack>

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

void zigZagOrder(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  else if (root->left == NULL && root->right == NULL)
  {
    cout << root->data;
    return;
  }
  else
  {
    stack<BinaryTreeNode<int> *> currentLevel;
    stack<BinaryTreeNode<int> *> nextLevel;
    currentLevel.push(root);
    bool leftToRight = true;
    while (!currentLevel.empty())
    {
      if (root == NULL)
      {
        return;
      }
      BinaryTreeNode<int> *temp = currentLevel.top();
      currentLevel.pop();
      if (temp)
      {
        cout << temp->data << " ";
        if (leftToRight)
        {
          if (temp->left)
          {
            nextLevel.push(temp->left);
          }
          if (temp->right)
          {
            nextLevel.push(temp->right);
          }
        }
        // right to left
        else
        {
          if (temp->right)
          {
            nextLevel.push(temp->right);
          }
          if (temp->left)
          {
            nextLevel.push(temp->left);
          }
        }
      }
      if (currentLevel.empty())
      {
        cout << "\n";
        swap(nextLevel, currentLevel);
        leftToRight = !leftToRight;
      }
    }
  }
}

int main()
{

  return 0;
}