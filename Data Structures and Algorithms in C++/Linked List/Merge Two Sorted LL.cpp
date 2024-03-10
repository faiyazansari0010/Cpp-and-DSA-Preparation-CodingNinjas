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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
  if (head1 == NULL and head2 == NULL)
  {
    return NULL;
  }
  if (head1 == NULL and head2 != NULL)
  {
    return head2;
  }
  if (head1 != NULL and head2 == NULL)
  {
    return head1;
  }

  Node *finalHead = NULL;
  Node *finalTail = NULL;

  while (head1 != NULL and head2 != NULL)
  {
    if (head1->data < head2->data)
    {
      if (finalHead == NULL)
      {
        finalHead = head1;
        finalTail = head1;
        head1 = head1->next;
      }
      else
      {
        finalTail->next = head1;
        finalTail = head1;
        head1 = head1->next;
      }
    }

    else
    {
      if (finalHead == NULL)
      {
        finalHead = head2;
        finalTail = head2;
        head2 = head2->next;
      }
      else
      {
        finalTail->next = head2;
        finalTail = head2;
        head2 = head2->next;
      }
    }
  }

  if (head1 == NULL)
  {
    finalTail->next = head2;
  }
  if (head2 == NULL)
  {
    finalTail->next = head1;
  }

  return finalHead;
}