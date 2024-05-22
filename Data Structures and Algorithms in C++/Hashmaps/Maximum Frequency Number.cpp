#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<unordered_map>
int highestFrequency(int arr[], int n) {
    unordered_map<int, int> freq;
    
    for(int i=0;i<n;i++){
        if(freq.count(arr[i]) == 0){
            freq[arr[i]] = 1;
        }
        else{
            freq[arr[i]]+=1;
        }
    }
    int count = -1;
    int ans = -1;
    for(int i=0;i<n;i++){
        if(freq[arr[i]] > count){
            count = freq[arr[i]];
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
  
  return 0;
}