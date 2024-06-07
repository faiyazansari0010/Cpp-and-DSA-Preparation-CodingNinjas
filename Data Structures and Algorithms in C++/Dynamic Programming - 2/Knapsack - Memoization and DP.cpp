#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

//Recursion

// int knapsack(int* weight, int* value, int n, int maxWeight) {

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



//Memoization

// int knapsack(int *weights, int *values, int n, int maxWeight, int** output){
//     if(n==0 or maxWeight == 0){
//         return 0;
//     }

//     if(output[n][maxWeight] != -1){
//         return output[n][maxWeight];
//     }

//     int ans;
//     if(weights[0]>maxWeight){
//         ans = knapsack(weights+1, values+1, n-1, maxWeight, output);
//     }

//     else{
//         int a = values[0] + knapsack(weights+1, values+1, n-1, maxWeight - weights[0], output);
//         int b = knapsack(weights+1, values+1, n-1, maxWeight, output);
//         ans = max(a, b);
//     }
	
//     output[n][maxWeight] = ans;
//     return output[n][maxWeight];
// }

// int knapsack(int* weight, int *value, int n, int maxWeight){
//     int **output = new int*[n+1];
//     for(int i=0;i<=n;i++){
//         output[i] = new int[maxWeight+1];
//         for(int j=0;j<=maxWeight;j++){
//             output[i][j] = -1;
//         }
//     }

//     return knapsack(weight, value, n, maxWeight, output);
// }



// Dynamic Programming

int knapsack(int *weights, int *values, int n, int maxWeight)
{
    int **output = new int *[n + 1];
    for (int i = 0; i <= n; i++)
        output[i] = new int[maxWeight + 1];

    for (int i = 0; i <= n; i++)
        output[i][0] = 0;

    for (int i = 0; i <= maxWeight; i++)
        output[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxWeight; j++)
        {
            if(weights[i-1]<=j){
                int a = values[i-1] + output[i-1][j-weights[i-1]];
                int b = output[i-1][j];
                output[i][j] = max(a, b);
            }
            
            else{
                output[i][j] = output[i-1][j];
            }
        }
    }
    return output[n][maxWeight];
}

int main(){
  
  return 0;
}