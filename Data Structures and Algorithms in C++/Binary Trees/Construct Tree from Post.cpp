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

BinaryTreeNode<int> *buildTreeHelper(int *po, int *in, int poS, int poE, int inS, int inE)
{
  if (poS > poE)
  {
    return NULL;
  }

  int rootData = po[poE];
  int rootIndex = -1;

  for (int i = 0; i <= inE; i++)
  {
    if (in[i] == rootData)
    {
      rootIndex = i;
      break;
    }
  }

  int LinS = inS;
  int LinE = rootIndex - 1;
  int LpoS = poS;
  int LpoE = LinE - LinS + LpoS;

  int RinS = rootIndex + 1;
  int RinE = inE;
  int RpoS = LpoE + 1;
  int RpoE = poE - 1;

  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);

  root->left = buildTreeHelper(po, in, LpoS, LpoE, LinS, LinE);
  root->right = buildTreeHelper(po, in, RpoS, RpoE, RinS, RinE);

  return root;
}

BinaryTreeNode<int> *buildTree(int *po, int poLen, int *in, int inLen)
{
  return buildTreeHelper(po, in, 0, poLen - 1, 0, inLen - 1);
}

int main()
{

  return 0;
}