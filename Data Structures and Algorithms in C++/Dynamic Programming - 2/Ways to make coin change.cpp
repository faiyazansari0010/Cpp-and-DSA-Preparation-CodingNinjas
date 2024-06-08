#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Recursion
// int countWaysToMakeChange(int arr[], int n, int value){

//     if(value==0){
//         return 1;
//     }

//     if(value<0){
//         return 0;
//     }

//     if(n<=0){
//         return 0;
//     }

//     int a = countWaysToMakeChange(arr, n, value-arr[n-1]);
//     int b = countWaysToMakeChange(arr, n-1, value);

//     return a+b;
// }



// Memoization
// int countWaysToMakeChange(int arr[], int n, int value, int** dp){
//     if(value==0){
//         return 1;
//     }

//     if(value<0){
//         return 0;
//     }

//     if(n<=0){
//         return 0;
//     }

//     if(dp[n][value] != -1){
//         return dp[n][value];
//     }

//     int a = countWaysToMakeChange(arr, n, value-arr[n-1], dp);
//     int b = countWaysToMakeChange(arr, n-1, value, dp);

//     dp[n][value] = a+b;

//     return dp[n][value];
// }

// int countWaysToMakeChange(int arr[], int n, int value){

//     int** dp = new int*[n+1];
//     for(int i=0;i<=n;i++){
//         dp[i] = new int[value+1];
//         for(int j=0;j<=value;j++){
//             dp[i][j] = -1;
//         }
//     }

//     return countWaysToMakeChange(arr, n, value, dp);
// }



// Dynamic Programming
int countWaysToMakeChange(int arr[], int n, int value){
    
    int** dp = new int*[n+1];
    for(int i=0;i<=n;i++){
        dp[i] = new int[value+1];
    }

    for(int i=0;i<=value;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<=n;i++){
        dp[i][0] = 1;
    }

     int a = countWaysToMakeChange(arr, n, value-arr[n-1], dp);
     int b = countWaysToMakeChange(arr, n-1, value, dp);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=value;j++){
            if(arr[i-1] <= j){

                int a = dp[i][j-arr[i-1]];
                int b = dp[i-1][j];
                
                dp[i][j] = a+b;
            }
            
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    
    return dp[n][value];
}    

int main(){
  
  return 0;
}