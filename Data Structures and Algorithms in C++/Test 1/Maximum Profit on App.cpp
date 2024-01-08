#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int helper(int budget[], int n, int s, int maximum){
    if(s==n){
        return maximum;
    }
    
    int sum = budget[s] * (s+1);
    helper(budget, n, s+1, max(sum, maximum));
}

int maximumProfit(int budget[], int n) {
    sort(budget, budget+n, greater<int>());
    helper(budget, n, 0, 0);
}
