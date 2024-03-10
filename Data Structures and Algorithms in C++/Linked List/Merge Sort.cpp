#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

Node *merge(Node *head1, Node *head2)
{
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    
    Node *finalHead=NULL;
    Node *finalTail=NULL;
    
    while(head1!=NULL and head2!= NULL){
        if(head1->data < head2->data){
        if(finalHead==NULL){
            finalHead=head1;
            finalTail=head1;
            head1=head1->next;
        }
            else{
                finalTail->next = head1;
                finalTail = head1;
                head1=head1->next;
            }
        }
        
        else{
            if(finalHead==NULL){
            finalHead=head2;
            finalTail=head2;
            head2=head2->next;
        }
            else{
                finalTail->next = head2;
                finalTail=head2;
                head2=head2->next;
            }
        }
    }
    
    if(head1==NULL){
        finalTail->next=head2;
    }
    if(head2==NULL){
        finalTail->next=head1;
    }
    
    return finalHead;
}

Node *middle(Node *head){
    if(head==NULL or head->next==NULL){
        return head;
    }
    
    Node *slow = head;
    Node *fast = head->next;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node *mergeSort(Node *head)
{
    
    if(head == NULL || head -> next == NULL){
        return head;
    }
	Node *mid = middle(head);
    Node *m = mid->next;
    
    mid->next = NULL;
    Node *h = head;
    
    Node *a = mergeSort(h);
    Node *b = mergeSort(m);
    
    Node *newHead = merge(a, b);
    
    return newHead;
}