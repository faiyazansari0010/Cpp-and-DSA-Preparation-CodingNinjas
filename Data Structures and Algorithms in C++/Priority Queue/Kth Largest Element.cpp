#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<queue>
int kthLargest(int* arr, int n, int k) {
    
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    
    while(--k){
        pq.pop();
    }
    return pq.top();
}

int main(){
  
  return 0;
}