#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

template <typename T = int>
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
		if (left != NULL)
		{
			delete left;
		}
		if (right != NULL)
		{
			delete right;
		}
	}
};

void preOrder(BinaryTreeNode<int> *root) {
	// Write your code here
    
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
  
  return 0;
}