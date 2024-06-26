#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> kSmallest(int arr[], int n, int k)
{
  priority_queue<int> pq;

  for (int i = 0; i < k; i++)
  {
    pq.push(arr[i]);
  }

  for (int i = k; i < n; i++)
  {
    if (arr[i] < pq.top())
    {
      pq.pop();
      pq.push(arr[i]);
    }
  }

  vector<int> ans;
  while (!pq.empty())
  {
    ans.push_back(pq.top());
    pq.pop();
  }
  return ans;
}

int main()
{

  return 0;
}