#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

#include <stack>
bool checkRedundantBrackets(string str)
{
  stack<int> mystack;
  int c = 0;

  for (int i = 0; i < str.size(); i++)
  {

    if (str[i] == ')')
    {
      while (mystack.top() != '(')
      {
        mystack.pop();
        c++;
      }
      mystack.pop();

      if (c <= 1)
      {
        return true;
      }
      else
      {
        c = 0;
      }
    }

    else
    {
      mystack.push(str[i]);
    }
  }
}

int main()
{

  return 0;
}