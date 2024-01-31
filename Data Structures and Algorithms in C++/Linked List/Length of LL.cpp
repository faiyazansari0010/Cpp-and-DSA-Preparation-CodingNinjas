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

int length(Node *head)
{
  // Write your code here
  int count = 0;
  while (head != NULL)
  {
    head = head->next;
    count++;
  }
  return count;
}
