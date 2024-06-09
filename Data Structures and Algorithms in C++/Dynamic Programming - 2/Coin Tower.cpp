#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<string>
string findWinner(int n, int x, int y)
{
	string ans;
	if(n==1 or x==n or y==n){
		ans = "Beerus";
		return ans;
	}

	if(n==x+1 or n==y+1){
		ans = "Whis";
		return ans;
	}
}

int main(){
  
  return 0;
}