#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
 
class Node{
public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
 
#include<stack>
Node* NextLargeNumber(Node *head) {
 if(head==NULL){
     return head;
 }
    
    Node *newHead=NULL, *newTail=NULL;
    stack<int>s;
    Node *temp=head;
    Node *tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    
    if(tail->data < 9){
        tail->data += 1;
        return head;
    }
    
    else{
     while(temp!=NULL){
         s.push(temp->data);
         temp=temp->next;
    	}
        
        int keep=0, carry=0;
        int digit = s.top()+1;
        
        while(digit>9){
            keep=digit%10;
            carry=digit/10;
            
            Node *newNode = new Node(keep);
            if(newHead==NULL){
                newHead = newNode;
                newTail=newNode;
            }
            else{
                newNode->next = newHead;
                newHead=newNode;
            }
            s.pop();
            if(s.size()!=0){
            	digit=s.top()+carry;
            }
            
            else{
                newNode = new Node(carry);
                newNode->next=newHead;
                newHead=newNode;
                head=newHead;
                return head;
            }
            
        }
    }
}

int main(){
  
  return 0;
}