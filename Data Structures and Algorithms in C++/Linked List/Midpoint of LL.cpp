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

Node *midPoint(Node *head)
{
  if (head == NULL or head->next == NULL)
  {
    return head;
  }

  Node *slow = head;
  Node *fast = head->next;
  while (fast != NULL)
  {

    if (fast->next == NULL)
    {
      return slow;
    }
    else if (fast == NULL)
    {
      return slow;
    }
    slow = slow->next;
    fast = fast->next->next;
  }

  return slow;
}