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

Node *deleteNode(Node *head, int pos)
{
  if (head == NULL)
  {
    return head;
  }
  if (pos == 0)
  {
    return head->next;
  }

  int count = 0;
  Node *preNode = head;
  while (preNode != NULL and count < pos - 1)
  {
    preNode = preNode->next;
    count++;
  }

  if (preNode != NULL and preNode->next != NULL)
  {
    Node *currNode = preNode->next;
    Node *postNode = currNode->next;
    preNode->next = postNode;
    delete currNode;
  }

  return head;
}
