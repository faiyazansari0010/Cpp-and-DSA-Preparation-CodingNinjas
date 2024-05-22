#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<unordered_map>

int pairSum(int *arr, int n) {
	
    int ans=0;
    unordered_map<int, int>mp;
    for(int i=0;i<n;i++){
        if(mp.count(-1*arr[i]) == 1){
            ans += (mp[-1*arr[i]] );
            mp[arr[i]]++;
        }
        else{
            mp[arr[i]]++;
        }
    }
    
    return ans;
}

int main(){
  
  return 0;
}