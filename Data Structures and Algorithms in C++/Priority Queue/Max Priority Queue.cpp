#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

class PriorityQueue
{
  vector<int> pq;

public:
  PriorityQueue()
  {
    // Implement the constructor here
  }

  /**************** Implement all the public functions here ***************/

  void insert(int element)
  {
    // Implement the insert() function here
    pq.push_back(element);
    int childIdx = pq.size() - 1;

    while (childIdx > 0)
    {
      int parentIdx = (childIdx - 1) / 2;

      if (pq[childIdx] > pq[parentIdx])
      {
        int temp = pq[childIdx];
        pq[childIdx] = pq[parentIdx];
        pq[parentIdx] = temp;
      }
      else
      {
        break;
      }
      childIdx = parentIdx;
    }
  }

  int getMax()
  {
    // Implement the getMax() function here
    if (isEmpty())
    {
      return 0;
    }
    return pq[0];
  }

  int removeMax()
  {
    // Implement the removeMax() function here
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
      int maxChildIdx;
      int lci = 2 * parentIdx + 1;
      int rci = 2 * parentIdx + 2;
      if (lci < pq.size() and rci < pq.size())
      {
        maxChildIdx = (pq[lci] >= pq[rci] ? lci : rci);
      }

      if (pq[parentIdx] < pq[maxChildIdx])
      {
        int temp = pq[maxChildIdx];
        pq[maxChildIdx] = pq[parentIdx];
        pq[parentIdx] = temp;
      }

      else
      {
        break;
      }
      parentIdx = maxChildIdx;
    }
    return ans;
  }

  int getSize()
  {
    // Implement the getSize() function here
    return pq.size();
  }

  bool isEmpty()
  {
    // Implement the isEmpty() function here
    return pq.size() == 0;
  }
};

int main()
{

  return 0;
}