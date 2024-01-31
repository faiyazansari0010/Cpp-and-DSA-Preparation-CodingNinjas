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

Node *insertNode(Node *head, int i, int data)
{
  if (head == NULL)
  {
    return head;
  }

  else if (i == 0)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
  }

  else
  {
    Node *newHead = insertNode(head->next, i - 1, data);
    head->next = newHead;
    return head;
  }
}