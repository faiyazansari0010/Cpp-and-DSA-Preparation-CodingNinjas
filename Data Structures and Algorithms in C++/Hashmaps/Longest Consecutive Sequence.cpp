#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<unordered_map>

vector<int> longestConsecutiveIncreasingSequence(int *arr, int n) {
    unordered_map<int, int> mp;    
    
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    
    vector<int> ans;
    for(int i=0;i<n;i++){
        vector<int> temp;
        if(mp.count(arr[i] - 1) == 0){
            temp.push_back(arr[i]);
            
            int t=1;
            while(mp.count(arr[i] + t) != 0){
                temp.push_back(arr[i] + t);
                t++;
            }
            if(temp.size() > ans.size()){
                ans=temp;
            }
        }
    }
    
    int n1 = ans[0];
    int n2 = ans[ans.size() - 1];
    ans.clear();
    ans.push_back(n1);
    ans.push_back(n2);
    return ans;
}

int main(){
  
  return 0;
}