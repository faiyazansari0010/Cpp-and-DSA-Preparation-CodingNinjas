#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

	template <typename T>
	class BinaryTreeNode {
    	public: 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this->data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

	template <typename T>
 	class Node{
    	public:
    	T data;
    	Node<T> *next;
    
    	Node(T data) {
        	this->data = data;
        	this->next = NULL;
    	}
 	};

class Pair{
    public:
    Node<int>* head;
    Node<int>* tail;
    
    Pair(){
        head=NULL;
        tail=NULL;
    }
};

Pair helper(BinaryTreeNode<int>* root){
    if(root==NULL){
        Pair ans;
        return ans;
    }
    
    Pair leftHalf = helper(root->left);
    Pair rightHalf = helper(root->right);
    Pair ans;
    
    Node<int>* midNode = new Node<int>(root->data);
    
    if(leftHalf.head != NULL and leftHalf.tail != NULL){
        leftHalf.tail->next = midNode;
        
        if(rightHalf.head != NULL and rightHalf.tail != NULL){
            midNode->next = rightHalf.head;
            ans.head = leftHalf.head;
            ans.tail = rightHalf.tail;
        }
        
        else{
            ans.head = leftHalf.head;
            ans.tail = midNode;
        }
    }
    
    else{
        if(rightHalf.head != NULL and rightHalf.tail != NULL){
            midNode->next = rightHalf.head;
            ans.head = midNode;
            ans.tail = rightHalf.tail;
        }
        
        else{
            ans.head = midNode;
            ans.tail = midNode;
        }
    }
    
    return ans;
}

Node<int>* constructLinkedList(BinaryTreeNode<int>* root) {
	if(root==NULL){
        Node<int>* node = NULL;
        return node;
    }
    
    return helper(root).head;
}

int main(){
  
  return 0;
}