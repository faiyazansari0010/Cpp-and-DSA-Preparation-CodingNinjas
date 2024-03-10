#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
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

Node *reverseLinkedList(Node *head)
{

  if (head == NULL or head->next == NULL)
  {
    return head;
  }
  Node *curr = head;
  Node *prev = NULL;
  while (curr != NULL)
  {
    Node *temp = curr;
    curr = curr->next;
    temp->next = prev;
    prev = temp;
  }

  return prev;
}