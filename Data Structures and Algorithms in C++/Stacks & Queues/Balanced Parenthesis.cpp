#include <algorithm>
#include <climits>
#include <stack>
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
    next = NULL;
  }
};

class Stack
{
  // Define the data members
  Node *head;
  int size;

public:
  Stack()
  {
    // Implement the Constructor
    this->head = NULL;
    this->size = 0;
  }

  /*----------------- Public Functions of Stack -----------------*/

  int getSize()
  {
    // Implement the getSize() function
    return size;
  }

  bool isEmpty()
  {
    // Implement the isEmpty() function
    return size == 0;
  }

  void push(int element)
  {
    // Implement the push() function
    Node *newNode = new Node(element);
    if (head == NULL)
    {
      head = newNode;
    }
    else
    {
      newNode->next = head;
      head = newNode;
    }
    size++;
  }

  int pop()
  {
    // Implement the pop() function
    if (head == NULL)
    {
      return -1;
    }
    int ans = head->data;
    Node *temp = head;
    head = head->next;
    size--;
    delete temp;
    return ans;
  }

  int top()
  {
    // Implement the top() function
    if (head == NULL)
    {
      return -1;
    }
    return head->data;
  }
};

bool isBalanced(string str)
{
  stack<char> mystack;
  for (int i = 0; i < str.size(); i++)
  {

    if (str[i] == '{' or str[i] == '[' or str[i] == '(')
    {
      mystack.push(str[i]);
    }

    else if (str[i] == '}' or str[i] == ']' or str[i] == ')')
    {

      if (mystack.empty())
      {
        return false;
      }
      else if (str[i] == ')' and mystack.top() == '(')
      {
        mystack.pop();
      }
      else if (str[i] == '}' and mystack.top() == '{')
      {
        mystack.pop();
      }
      else if (str[i] == ']' and mystack.top() == '[')
      {
        mystack.pop();
      }
      else
      {
        return false;
      }
    }
    else
      continue;
  }

  if (mystack.size() == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}