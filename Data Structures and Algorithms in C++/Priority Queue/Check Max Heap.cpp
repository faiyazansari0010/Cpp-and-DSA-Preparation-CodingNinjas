#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

bool isMaxHeap(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int parentIdx = i;
    int lci = 2 * parentIdx + 1;
    int rci = 2 * parentIdx + 2;

    if (lci < n and rci < n)
    {
      if (arr[parentIdx] < arr[lci] or arr[parentIdx] < arr[rci])
      {
        return false;
      }
    }

    else if (lci < n)
    {
      if (arr[parentIdx] < arr[lci])
      {
        return false;
      }
    }
  }

  return true;
}

int main()
{

  return 0;
}