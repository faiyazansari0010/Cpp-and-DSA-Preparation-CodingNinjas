#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

void heapSort(int arr[], int n)
{

  for (int i = 1; i < n; i++)
  {

    int childIdx = i;

    while (childIdx > 0)
    {
      int parentIdx = (childIdx - 1) / 2;
      if (arr[childIdx] < arr[parentIdx])
      {
        int temp = arr[childIdx];
        arr[childIdx] = arr[parentIdx];
        arr[parentIdx] = temp;
      }
      else
      {
        break;
      }
      childIdx = parentIdx;
    }
  }

  int size = n;

  while (size > 1)
  {

    int temp = arr[0];
    arr[0] = arr[size - 1];
    arr[size - 1] = temp;
    size--;

    int childIdx;
    int parentIdx = 0;
    while (parentIdx < size)
    {
      int lci = (parentIdx * 2) + 1;
      int rci = (parentIdx * 2) + 2;

      if (lci < size and rci < size)
      {
        childIdx = (arr[lci] < arr[rci] ? lci : rci);
      }
      else if (lci < size)
        childIdx = lci;
      else
        break;

      if (arr[childIdx] < arr[parentIdx])
      {
        int temp = arr[childIdx];
        arr[childIdx] = arr[parentIdx];
        arr[parentIdx] = temp;
      }
      else
      {
        break;
      }

      parentIdx = childIdx;
    }
  }
}

int main()
{

  return 0;
}