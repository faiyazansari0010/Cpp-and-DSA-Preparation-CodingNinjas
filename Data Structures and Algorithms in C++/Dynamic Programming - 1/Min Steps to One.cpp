#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

 int countMinStepsToOne(int n)
{
    if(n==1 or n==0){
        return 0;
    }
    
    int a = INT_MAX, b = INT_MAX, c = INT_MAX;
    if(n%2==0){
        a = countMinStepsToOne(n/2);
    }
    if(n%3==0){
        b = countMinStepsToOne(n/3);
    }
    c = countMinStepsToOne(n-1);
    return min(a, min(b, c)) + 1;
}

int main(){
  
  return 0;
}