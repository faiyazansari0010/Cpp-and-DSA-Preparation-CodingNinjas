#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<unordered_map>

void printIntersection(int arr1[], int arr2[], int n, int m) {
    unordered_map<int, int> ans;
   
    if(n>m){
        for(int i=0;i<m;i++){
            ans[arr2[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(ans.count(arr1[i]) == 1 and ans[arr1[i]] > 0){
                cout<<arr1[i]<<endl;
                ans[arr1[i]]--;
            }
        }
    }
    
    else{
        for(int i=0;i<n;i++){
            ans[arr1[i]]++;
        }
        
        for(int i=0;i<m;i++){
            if(ans.count(arr2[i]) == 1 and ans[arr2[i]] > 0){
                cout<<arr2[i]<<endl;
                ans[arr2[i]]--;
            }
        }
    }
}

int main(){
  
  return 0;
}