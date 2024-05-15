#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class PriorityQueue
{
  vector<int> pq;

public:
  bool isEmpty()
  {
    return pq.size() == 0;
  }

  int getSize()
  {
    return pq.size();
  }

  int getMin()
  {
    if (isEmpty())
    {
      return 0;
    }

    return pq[0];
  }

  void insert(int element)
  {
    pq.push_back(element);

    int childIndex = pq.size() - 1;

    while (childIndex > 0)
    {
      int parentIndex = (childIndex - 1) / 2;

      if (pq[childIndex] < pq[parentIndex])
      {
        int temp = pq[childIndex];
        pq[childIndex] = pq[parentIndex];
        pq[parentIndex] = temp;
      }
      else
      {
        break;
      }

      childIndex = parentIndex;
    }
  }

  int removeMin()
  {
    if (isEmpty())
    {
      return 0;
    }

    int ans = pq[0];
    pq[0] = pq[pq.size() - 1];
    pq.pop_back();

    int parentIdx = 0;

    while (parentIdx < pq.size())
    {
      int minChildIdx;
      int lci = 2 * parentIdx + 1;
      int rci = 2 * parentIdx + 2;
      if (lci < pq.size() and rci < pq.size())
      {
        minChildIdx = (pq[lci] <= pq[rci] ? lci : rci);
      }

      if (pq[parentIdx] > pq[minChildIdx])
      {
        int temp = pq[minChildIdx];
        pq[minChildIdx] = pq[parentIdx];
        pq[parentIdx] = temp;
      }

      else
      {
        break;
      }
      parentIdx = minChildIdx;
    }
    return ans;
  }
};

int main()
{

  return 0;
}