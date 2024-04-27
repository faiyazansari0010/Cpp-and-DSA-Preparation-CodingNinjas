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
	class Node {
		public:
    	T data;
    	Node<T> *next;
    	Node(T data) {
        	this->data=data;
        	this->next=NULL;
    	}
	};



vector<Node<int>*> constructLinkedListForEachLevel(BinaryTreeNode<int> *root) {
    vector < Node<int>* > answer;

    if(root==NULL){
		answer.push_back(NULL);
        return answer;
    }
    
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    pendingNodes.push(NULL);
    
    Node<int>* head=NULL;
    Node<int>* tail=NULL;
    
    while(pendingNodes.size() != 0){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        
		if(front==NULL){
            answer.push_back(head);
            head=NULL;
            tail=NULL;
            if(pendingNodes.size()!=0){
                pendingNodes.push(NULL);
            }
        }
        
        else{
            if(head==NULL){
                head = new Node<int>(front->data);
                tail=head;
            }
            else{
                Node<int>* n = new Node<int>(front->data);
                tail->next=n;
                tail=n;
            }
            
            if(front->left!=NULL){
                pendingNodes.push(front->left);
            }
            if(front->right!=NULL){
                pendingNodes.push(front->right);
            }
        }
    }
    
    return answer;
}

int main(){
  
  return 0;
}