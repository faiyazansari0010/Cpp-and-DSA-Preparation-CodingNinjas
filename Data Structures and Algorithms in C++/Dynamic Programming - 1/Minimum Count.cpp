#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Recursiom
// int minCount(int n)
// {
//     if(sqrt(n) == floor(sqrt(n))){
//     	return 1;    
//     }
    
//     if(n<=3){
//         return n;
//     }
    
//     int res = n;
    
//     for (int x = 1; x <= sqrt(n); x++)
//     {
//         int tempAns = minCount(n-x*x);
//         res = min(res, 1+tempAns);
//     }
//     return res;
// }



// Memoization



// int minCount(int n, int *arr)
// {
    
//     if(sqrt(n) == floor(sqrt(n))){
//         arr[n]=1;
//     	return 1;    
//     }
    
//     if(n<=3){
//         arr[n] = n;
//         return n;
//     }
    
//     int res = n;
    
//     if(arr[n] != -1){
//         return arr[n];
//     }
    
//     for (int i = 1; i <= sqrt(n); i++)
//     {
//         int tempAns = minCount(n-i*i, arr);
//         res = min(res, 1+tempAns);
//     }
//     arr[n] = res;
//     return arr[n];
// }

int minCount(int n){
    int *arr = new int[n+1];
    
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }
    
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    
    for(int i=4; i<=n; i++){
        arr[i] = i;
        
        for(int j=1; j<=sqrt(i); j++){
            int temp = j*j;
            arr[i] = min(arr[i], arr[i-temp]+1);
        }
    }
    return arr[n];
}

int main(){
  
  return 0;
}