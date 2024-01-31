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

int helper(Node *head, int len)
{

  if (head == NULL)
  {
    return len;
  }

  return helper(head->next, ++len);
}

int length(Node *head)
{

  return helper(head, 0);
}

// int length(Node *head) {

//     if(head==NULL){
//         return 0;
//     }
//     return 1+length(head->next);
// }