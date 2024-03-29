#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

#include <stack>
int *stockSpan(int *price, int size)
{
  stack<int> mystack;
  int *arr = new int[size];
  arr[0] = 1;
  mystack.push(0);

  for (int i = 1; i < size; i++)
  {
    while (!mystack.empty() and price[mystack.top()] < price[i])
    {
      mystack.pop();
    }
    if (mystack.empty())
    {
      arr[i] = i + 1;
    }
    else
    {
      arr[i] = i - mystack.top();
    }
    mystack.push(i);
  }
  return arr;
}

int main()
{

  return 0;
}