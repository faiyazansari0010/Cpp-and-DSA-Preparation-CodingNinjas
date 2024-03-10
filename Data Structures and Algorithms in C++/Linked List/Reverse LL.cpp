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

Node *reverseLinkedListRec(Node *head)
{
    if(head==NULL or head->next==NULL){
        return head;
    }
    
    Node *newHead = reverseLinkedListRec(head->next);
    
    Node *last = head->next;
    
    last->next = head;
    
    head->next=NULL;
    
    return newHead;
}