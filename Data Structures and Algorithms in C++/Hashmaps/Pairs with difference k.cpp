#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <unordered_map>
int getPairsWithDifferenceK(int *arr, int n, int k)
{
    // Write your code here
    unordered_map<int, int> mp;
    int count = 0;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    if (k != 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (mp.count(arr[i] - k) > 0)
                count = count + mp[arr[i] - k];
        }
    }
    else if (k == 0)
    {
        for (int i = 0; i < n; i++)
        {
            if(mp.count(arr[i]) > 0){
                int n = mp[arr[i]] - 1;
                count += (n*(n-1)) / 2;
                mp[arr[i]] = 0;
            }
        }
    }
    return count;
}

int main(){
  
  return 0;
}