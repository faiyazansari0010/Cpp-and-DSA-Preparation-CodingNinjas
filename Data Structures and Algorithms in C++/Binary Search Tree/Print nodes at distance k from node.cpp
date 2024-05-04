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

void printNodesAtK(BinaryTreeNode<int> *root, int k)
{
  if (root == NULL or k < 0)
  {
    return;
  }
  if (k == 0)
  {
    cout << root->data << endl;
    return;
  }
  printNodesAtK(root->left, k - 1);
  printNodesAtK(root->right, k - 1);
}

int distanceK(BinaryTreeNode<int> *root, int node, int k)
{
  if (root == NULL)
  {
    return -1;
  }
  if (root->data == node)
  {
    printNodesAtK(root, k);
    return 0;
  }

  int ld = distanceK(root->left, node, k);
  if (ld != -1)
  {
    if (ld + 1 == k)
    {
      cout << root->data << endl;
    }
    else
    {
      printNodesAtK(root->right, k - ld - 2);
    }
    return ld + 1;
  }

  int rd = distanceK(root->right, node, k);
  if (rd != -1)
  {
    if (rd + 1 == k)
    {
      cout << root->data << endl;
    }
    else
    {
      printNodesAtK(root->left, k - rd - 2);
    }
    return rd + 1;
  }

  return -1;
}

// vector<BinaryTreeNode<int>*> getPath(BinaryTreeNode<int>* root, int node){
//     if(root==NULL){
//         vector<BinaryTreeNode<int>*> path;
//         path.push_back(NULL);
//         return path;
//     }
//     if(root->data==node){
//         vector<BinaryTreeNode<int>*> path;
//         path.push_back(root);
//         return path;
//     }
//     vector<BinaryTreeNode<int>*> leftPath;
//     leftPath = getPath(root->left, node);
//     if(leftPath.size() != 0){
//         leftPath.push_back(root);
//         return leftPath;
//     }

//     vector<BinaryTreeNode<int>*> rightPath;
//     rightPath = getPath(root->right, node);
//     if(rightPath.size() != 0){
//         rightPath.push_back(root);
//         return rightPath;
//     }

//     else{
//         vector<BinaryTreeNode<int>*> path;
//         path.push_back(NULL);
//         return path;
//     }
// }

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{
  if (root == NULL)
  {
    return;
  }
  distanceK(root, node, k);
}

int main()
{

  return 0;
}