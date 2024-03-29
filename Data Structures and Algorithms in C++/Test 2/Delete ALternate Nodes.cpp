#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;


/*********************************************************
 
    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head) {
    if(head == NULL) {
        return;
    }
    if(head->next==NULL){
        return;
    }
    
    Node *temp=head;
    while(temp!=NULL and temp->next!=NULL){
        Node *temp1 = temp->next;        
        Node *after = temp->next->next;
        temp->next=after;
        temp=after;
        temp1->next=NULL;
        delete temp1;
    }
    
}

int main(){
  
  return 0;
}