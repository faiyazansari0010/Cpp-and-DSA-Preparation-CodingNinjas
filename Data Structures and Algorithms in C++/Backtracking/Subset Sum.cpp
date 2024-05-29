#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int subsetSum(int arr[], int n, int idx, int tempSum, int sum, int count){
    if(idx==n){
        if(tempSum==sum){
            count++;
        }
        return count;
    }
    
    count = subsetSum(arr, n, idx+1, tempSum+arr[idx], sum, count);
    count = subsetSum(arr, n, idx+1, tempSum, sum, count);
	return count;
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        if (n == 0)
            cout <<""<< "\n";
        else
            cout << subsetSum(arr, n, 0, 0, k, 0) << "\n";
    }
    return 0;
}

int main(){
  
  return 0;
}