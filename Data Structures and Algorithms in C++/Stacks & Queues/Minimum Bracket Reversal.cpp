#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

#include <stack>
int countBracketReversals(string str)
{
  if (str.size() % 2 != 0)
  {
    return -1;
  }
  if (str.size() == 0)
  {
    return 0;
  }

  stack<char> mystack;
  for (int i = 0; i < str.size(); i++)
  {
    char currentChar = str[i];
    if (str[i] == '{')
    {
      mystack.push(currentChar);
    }

    else
    {
      if (mystack.size() != 0 and mystack.top() == '{')
      {
        mystack.pop();
      }
      else
      {
        mystack.push(currentChar);
      }
    }
  }

  int c = 0;
  while (!mystack.empty())
  {
    char c1 = mystack.top();
    mystack.pop();
    char c2 = mystack.top();
    mystack.pop();

    if (c1 == c2)
    {
      c++;
    }
    else
    {
      c += 2;
    }
  }

  return c;
}

int main()
{

  return 0;
}