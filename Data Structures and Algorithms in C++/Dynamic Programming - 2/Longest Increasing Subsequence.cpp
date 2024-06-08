#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>
// Recursion
// int solve_rec(int* arr, int n, int curr, int prev) {

//     if(curr==n){
//         return 0;
//     }

//     int take = 0;

//     if(prev==-1 || arr[curr]>arr[prev]){
//         take = 1 + solve(arr, n, curr+1, curr);	    
//     }

//     int notTake = solve(arr, n, curr+1, prev);

//     return max(take, notTake);
// }

// int longestIncreasingSubsequence(int* arr, int n) {
//     return solve_rec(arr, n, 0, -1);    
// }


// Memoization
int solve_mem(int* arr, int n, int curr, int prev, int**output) {

    if(curr==n){
        return 0;
    }
	
    if(output[curr][prev+1] != -1){
        return output[curr][prev+1];
    }
    
    int take = 0;
    if(prev==-1 || arr[curr]>arr[prev]){
        take = 1 + solve_mem(arr, n, curr+1, curr, output);	    
    }

    int notTake = solve_mem(arr, n, curr+1, prev, output);

    output[curr][prev+1] = max(take, notTake);
    
    return output[curr][prev+1];
}

// int longestIncreasingSubsequence(int* arr, int n) {
//     int **output = new int*[n];
    // for(int i=0;i<n;i++){
    //     output[i] = new int[n+1];
    //     for(int j=0;j<=n;j++){
    //         output[i][j] = -1;
    //     }
    // }
//     return solve_mem(arr, n, 0, -1, output);    
// }



int longestIncreasingSubsequence(int* arr, int n){
    
    int* output = new int[n];
    
    output[0] = 1;
    for(int i=1;i<n;i++){
        int ans = 0;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){
                ans = max(ans, output[j]);
            }
        }
        output[i] = ans+1;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans = max(ans, output[i]);
    }
    return ans;
}

int main(){
  
  return 0;
}