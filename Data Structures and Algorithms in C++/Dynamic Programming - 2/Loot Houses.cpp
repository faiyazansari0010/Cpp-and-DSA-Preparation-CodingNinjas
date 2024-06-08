#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Recusrion
// int maxMoneyLooted(int *arr, int n)
// {
//     if(n==0){
//         return 0;
//     }
    
//     if(n==1){
//         return arr[0];
//     }
    
// 	int a = arr[0] + maxMoneyLooted(arr+2, n-2);
//     int b = maxMoneyLooted(arr+1, n-1);
    
//     return max(a, b);
// }


// Memoization
// int maxMoneyLooted(int *arr, int n, int* output){
//     if(n==0){
//         return 0;
//     }
    
//     if(n==1){
//         output[0] = arr[0];
//         return arr[0];
//     }
    
//     if(output[n-1] != -1){
//         return output[n-1];
//     }
    
//     int a = arr[0] + maxMoneyLooted(arr+2, n-2, output);
//     int b = maxMoneyLooted(arr+1, n-1, output);
    
//     output[n-1] = max(a, b);
//     return output[n-1];
// }

// int maxMoneyLooted(int *arr, int n){
//     int *output = new int[n];
//     for(int i=0;i<n;i++){
//         output[i] = -1;
//     }
//     return maxMoneyLooted(arr, n, output);
// }


// Dynamic Programming
int maxMoneyLooted(int *arr, int n){
    int *output = new int[n];
    
    output[0] = arr[0];
    output[1] = max(arr[0], arr[1]);
    
    for(int i=2;i<n;i++){
        output[i] = max(arr[i] + output[i-2], output[i-1]);
    }
    
    return output[n-1];
}

int main(){
  
  return 0;
}