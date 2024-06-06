#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int countStepsToOne(int n)
{
	int *ans = new int[n+1];
    
    ans[0] = 0;
    ans[1] = 0;
    
    int a, b, c;
    for(int i=2;i<=n;i++){
        
        a = INT_MAX;
        b = INT_MAX;
        c = INT_MAX;
        
        if(i % 2 == 0){
            a = ans[i/2];
        }
        
        if(i%3 == 0){
        	b = ans[i/3];    
        }
        
        c = ans[i-1];
        
        ans[i] = min(a, min(b, c)) + 1;
    }
    
    return ans[n];
}

int main(){
  
  return 0;
}