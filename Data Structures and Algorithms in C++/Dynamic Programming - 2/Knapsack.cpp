#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int knapsack(int *weights, int* values, int n, int maxWeight, int currWeight, int currValue, int currIdx){
    
    if(currIdx == n){
        if(currWeight <= maxWeight){
            return 0;
        }
         return 0;
    }
    if(currWeight == maxWeight){
        return 0;
    }
    
    if(maxWeight<=0){
        return 0;
    }
    
    if(weights[currIdx] > maxWeight){
        return knapsack(weights, values, n, maxWeight, currWeight, currValue, currIdx+1);
    }
    
    int b = values[currIdx] + knapsack(weights, values, n, maxWeight-weights[currIdx], currWeight+weights[currIdx], currValue+values[currIdx], currIdx+1);
    int a = knapsack(weights, values, n, maxWeight, currWeight, currValue, currIdx+1);
	
    int ans = max(a, b);
    
    return ans;
}

int knapsack(int *weights, int *values, int n, int maxWeight)
{
	return knapsack(weights, values, n, maxWeight, 0, 0, 0);
}



// int knapsack(int *weights, int *values, int n, int maxWeight){
//     if(n==0 or maxWeight == 0){
//         return 0;
//     }
    
//     if(weights[0]>maxWeight){
//         return knapsack(weights+1, values+1, n-1, maxWeight);
//     }
    
//     int a = values[0] + knapsack(weights+1, values+1, n-1, maxWeight - weights[0]);
//     int b = knapsack(weights+1, values+1, n-1, maxWeight);
    
//     return max(a, b);
// }

int main(){
  
  return 0;
}