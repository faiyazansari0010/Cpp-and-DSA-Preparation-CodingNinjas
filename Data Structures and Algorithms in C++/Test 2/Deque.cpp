#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

class Node{
    public:
	int data;
    Node *next;
    Node(int element){
        data=element;
        next=NULL;
    }
};

class Deque {
    public:
    int size;
    Node *head;
    Node *tail;
    int capacity;
    Deque(int s){
        size=0;
        capacity=s;
        head=NULL;
        tail==NULL;
    }
    
    void insertFront(int a){
        if(size <capacity){
            Node *newNode = new Node(a);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                newNode->next=head;
                head=newNode;
            }
            size++;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    
    void insertRear(int a){
        if(size <capacity){
            Node *newNode = new Node(a);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            size++;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    
    void deleteFront(){
        if(size != 0){
            head=head->next;
            size--;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    
    void deleteRear(){
        if(size != 0){
            Node *temp=head;
            while(temp->next->next != NULL){
                temp=temp->next;
            }
            tail=temp;
            tail->next=NULL;
            size--;
            return;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }
    
    int getFront(){
        if(size != 0){
            return head->data;
        }
        else{
            return -1;
        }
    }
    
    int getRear(){
        if(size != 0){
            return tail->data;
        }
        else{
            return -1;
        }
    }
};

int main(){
  
  return 0;
}