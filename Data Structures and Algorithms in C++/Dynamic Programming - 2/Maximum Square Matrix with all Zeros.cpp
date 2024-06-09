#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int findMaxSquareWithAllZeros(int **arr, int n, int m)
{
    
	int **ans = new int*[n];
    for(int i=0;i<n;i++){
        ans[i] = new int[m];
    }

    for(int i=0;i<n;i++){
        if(arr[i][0] == 0){
            ans[i][0] = 1;
        }
        else{
            ans[i][0] = 0;
        }
    }

    for(int i=0;i<m;i++){
        if(arr[0][i] == 0){
            ans[0][i] = 1;
        }
        else{
            ans[0][i] = 0;
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            
            if(arr[i][j] == 0){
                ans[i][j] = 1 + min( ans[i-1][j-1], min(ans[i][j-1], ans[i-1][j]) );
            }

            else{
                ans[i][j] = 0;
            }
        }
    }
    int res = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(res<ans[i][j]){
                res = ans[i][j];
            }
        }
    }

    return res;
}

int main(){
  
  return 0;
}