#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra)
{
  if (input.size() <= 1)
  {
    return;
  }

  int topElement = input.top();
  input.pop();

  reverseStack(input, extra);

  while (!input.empty())
  {
    extra.push(input.top());
    input.pop();
  }

  input.push(topElement);

  while (!extra.empty())
  {
    input.push(extra.top());
    extra.pop();
  }
}

int main()
{

  return 0;
}