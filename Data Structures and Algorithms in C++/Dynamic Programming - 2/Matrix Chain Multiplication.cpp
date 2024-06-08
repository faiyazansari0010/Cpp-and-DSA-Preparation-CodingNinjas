#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>

// Recursion
// int solve(int* arr, int s, int e){
//     if(s==e){
//         return 0;
//     }
    
//     if(s==e-1){
//         return 0;
//     }
    
//     int ans = INT_MAX;
    
//     for(int k=s+1; k<e; k++){
//         int a = solve(arr, s, k);
//         int b = solve(arr, k, e);
//         int c = arr[s]*arr[k]*arr[e];
        
//         int temp = a+b+c;
//         ans = min(ans, temp);
//     }
    
//     return ans;
// }

// int matrixChainMultiplication(int* arr, int n) {
    
//     return solve(arr, 0, n);
// }


// Memoization
int solve(int** dp, int* arr, int s, int e){
    if(s==e){
        return 0;
    }
    
    if(s==e-1){
        return 0;
    }
    
    if(dp[s][e] != -1){
        return dp[s][e];
    }
    
    int ans = INT_MAX;
    
    for(int k=s+1; k<e; k++){
        int a = solve(dp, arr, s, k);
        int b = solve(dp, arr, k, e);
        int c = arr[s]*arr[k]*arr[e];
        
        int temp = a+b+c;
        ans = min(ans, temp);
    }
    
    dp[s][e] = ans;
    
    return ans;
}

int matrixChainMultiplication(int* arr, int n){
    int** dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[n+1];
        for(int j=0;j<=n;j++){
            dp[i][j] = -1;
        }
    }
    return solve(dp, arr, 0, n);
}

int main(){
  
  return 0;
}