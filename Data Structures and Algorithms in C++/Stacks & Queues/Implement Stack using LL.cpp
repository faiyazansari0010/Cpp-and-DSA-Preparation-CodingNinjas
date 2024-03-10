#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack {
	// Define the data members
    Node *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        this->head=NULL;
        this->size=0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return size==0;
    }

    void push(int element) {
        // Implement the push() function
        Node *newNode = new Node(element);
        if(head==NULL){
            head=newNode;
        }
        else{
        newNode->next=head;
        head=newNode;
        }
        size++;
    }

    int pop() {
        // Implement the pop() function
        if(head==NULL){
            return -1;
        }
        int ans = head->data;
        Node *temp=head;
        head=head->next;
        size--;
        delete temp;
        return ans;
    }

    int top() {
        // Implement the top() function
        if(head==NULL){
            return -1;
        }
        return head->data;
    }
};

int main(){
  
  return 0;
}