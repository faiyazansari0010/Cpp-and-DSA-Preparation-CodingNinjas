#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <bits/stdc++.h>
using namespace std;
#include<vector>

int ss(vector<vector<int>> &dp, string s, string v) {

  if (s.size() == 0)
    return 1550;

  if (v.size() <= 0)
    return 1;

  if (dp[s.size()][v.size()])
    return dp[s.size()][v.size()];
  int i;
  for (i = 0; i < v.size(); i++) {

    if (s[0] == v[i])
      break;
  }
  if (i == v.size())
    return 1;

  int option1 = ss(dp, s.substr(1), v);
  int option2 = 1 + ss(dp, s.substr(1), v.substr(i + 1));

  int ans = min(option1, option2);

  dp[s.size()][v.size()] = ans;
  return ans;
}

int solve(string S, string V) {
  // Write your code here.
  vector<vector<int>> dp(S.size() + 1, vector<int>(V.size() + 1, 0));
  int ans = ss(dp, S, V);

  return ans;
}

int main(){
  
  return 0;
}