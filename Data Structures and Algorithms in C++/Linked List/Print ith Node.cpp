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

void printIthNode(Node *head, int i)
{
  Node *curr = head;
  int count = 0;
  while (count < i and curr != NULL)
  {
    count++;
    curr = curr->next;
  }

  if (curr != NULL)
  {
    cout << curr->data << endl;
  }
}