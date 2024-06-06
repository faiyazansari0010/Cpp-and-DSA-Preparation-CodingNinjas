#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>

// int balancedBTs(int n, int* arr) {
//     if(n<=1) return 1;
    
//     if(arr[n] != -1){
//         return arr[n];
//     }
    
//     int x= balancedBTs(n-1, arr);
//     int y =balancedBTs(n-2, arr);
//     int mod = (int)(pow(10,9) + 7);
    
//     int temp1=(int) (((long)(x)*x)%mod);
//     int temp2=(int) ((2*(long)(x)*y)%mod);
	
//     arr[n] = (temp1 + temp2) % mod;
        
//     return arr[n];
// }

// int balancedBTs(int n){
//     int *arr = new int[n+1];
//     for(int i=0;i<=n;i++){
//         arr[i] = -1;
//     }
//     return balancedBTs(n, arr);
// }


int balancedBTs(int n){
    
    if(n<=1) return 1;
    
    int mod = (int)(pow(10,9) + 7);
    int x= balancedBTs(n-1);
    int y =balancedBTs(n-2);
    
    int temp1=(int) (((long)(x)*x)%mod);
    int temp2=(int) ((2*(long)(x)*y)%mod);
	
    int ans = (temp1 + temp2) % mod;
    return ans;
}

int main(){
  
  return 0;
}