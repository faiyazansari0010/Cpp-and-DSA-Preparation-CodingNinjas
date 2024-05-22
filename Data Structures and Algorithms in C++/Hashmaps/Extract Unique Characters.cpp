#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<unordered_map>

string uniqueChar(string str) {
	string s;
    unordered_map<char, int> mp;
    for(int i=0;i<str.size();i++){
        if(mp.count(str[i]) == 0){
			mp[str[i]]++;
            s += str[i];
        }
    }
    return s;
}

int main(){
  
  return 0;
}