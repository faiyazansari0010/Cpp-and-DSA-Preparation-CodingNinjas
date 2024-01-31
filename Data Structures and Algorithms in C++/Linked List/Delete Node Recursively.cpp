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

Node *deleteNodeRec(Node *head, int pos)
{
  // Write your code here

  if (head == NULL)
  {
    return head;
  }

  else if (pos == 0)
  {
    return head->next;
  }

  else
  {
    Node *newNode = deleteNodeRec(head->next, pos - 1);
    head->next = newNode;
    return head;
  }
}