#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<unordered_map>
int lengthOfLongestSubsetWithZeroSum(int* arr, int n) {
     unordered_map<int,int> mp; 
    int maxLen = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += arr[i]; 
        if(sum == 0) {
            maxLen = i + 1; 
        }
        else {
            if(mp.count(sum)>0) {
                maxLen = max(maxLen, i - mp[sum]); 
            }
            else {
                mp[sum] = i;
            }
        }   
    }

    return maxLen; 
}

int main(){
  
  return 0;
}