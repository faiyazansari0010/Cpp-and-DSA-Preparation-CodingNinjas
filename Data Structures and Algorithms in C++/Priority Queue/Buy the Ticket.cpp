#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

#include <vector>
#include <queue>

int buyTicket(int *arr, int n, int k)
{
  int time = 0;
  queue<int> q;
  priority_queue<int> pq;

  for (int i = 0; i < n; i++)
  {
    q.push(i);
    pq.push(arr[i]);
  }

  while (q.size() != 0)
  {
    if (arr[q.front()] != pq.top())
    {
      int temp = q.front();
      q.pop();
      q.push(temp);
    }

    if (arr[q.front()] == pq.top() and q.front() == k)
    {
      time = time + 1;
      return time;
      break;
    }

    else if (arr[q.front()] == pq.top() and q.front() != k)
    {
      q.pop();
      pq.pop();
      time = time + 1;
    }
  }
  return time;
}

int main()
{

  return 0;
}