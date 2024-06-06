#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<cmath>
int balancedBTs(int n) {
    int *arr = new int[n+1];

    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 3;

    int mod = (int) ( pow(10, 9) ) + 7;
    for(int i=3; i<=n; i++){
        int x = arr[i-1];
        int y = arr[i-2];

        int temp1=(int) (((long)(x)*x)%mod);
        int temp2=(int) ((2*(long)(x)*y)%mod);

        arr[i] = (temp1 + temp2) % mod;
    }
    return arr[n];
}

int main(){
  
  return 0;
}