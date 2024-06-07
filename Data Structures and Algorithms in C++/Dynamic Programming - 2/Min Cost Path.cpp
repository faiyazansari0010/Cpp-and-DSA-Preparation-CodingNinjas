#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Recursion
// int minCostPath(int **input, int row, int col, int m, int n){
//     if(row==m-1 and col==n-1){
//         return input[row][col];
//     }
    
//     if(row==m-1){
//         int a = 0;
//         for(int i=col;i<n;i++){
//             a += input[row][i];
//         }
//         return a;
//     }
    
//     if(col==n-1){
//         int a = 0;
//         for(int i=row;i<m;i++){
//             a += input[i][col];
//         }
//         return a;
//     }
    
//     int a = input[row][col];
//     int x = minCostPath(input, row+1, col, m, n);
//     int y = minCostPath(input, row, col+1, m, n);
//     int z = minCostPath(input, row+1, col+1, m, n);
    
//     int ans = min(x, min(y, z)) + a;
    
//     return ans;
// }

// int minCostPath(int **input, int m, int n){
// 	return minCostPath(input, 0, 0, m, n);
// }


// Memoization
// int minCostPathHelper(int **input, int row, int col, int m, int n, int **arr){
//     if(row==m-1 and col==n-1){
//         // arr[row][col] = input[row][col];
//         return input[row][col];
//     }
    
//     if(arr[row][col] != -1){
//         return arr[row][col];
//     }
    
//     if(row==m-1){
//         int a = 0;
//         for(int i=col;i<n;i++){
//             a += input[row][i];
//         }
//         arr[row][col] = a;
//         return a;
//     }
    
//     if(col==n-1){
//         int a = 0;
//         for(int i=row;i<m;i++){
//             a += input[i][col];
//         }
//         arr[row][col] = a;
//         return a;
//     }
//     // if(row>=m or col>=n){
//     //     return INT_MAX;
//     // }
    
//     int a = input[row][col];
//     int x = minCostPathHelper(input, row+1, col, m, n, arr);
//     int y = minCostPathHelper(input, row, col+1, m, n, arr);
//     int z = minCostPathHelper(input, row+1, col+1, m, n, arr);
    
//     int ans = min(x, min(y, z)) + a;
    
//     arr[row][col] = ans;
    
//     return ans;
// }

// int minCostPath(int **input, int m, int n){
    
//     int **arr = new int*[n];
    
//     for(int i=0;i<n;i++){
//         arr[i] = new int[m];
//         for(int j=0;j<m;j++){
//             arr[i][j] = -1;
//         }
//     }
    
// 	return minCostPathHelper(input, 0, 0, m, n, arr);
// }



// Dynamic Programming
int minCostPath(int **input, int m, int n){
    
    int **output = new int*[m];
    for(int i=0;i<m;i++){
        output[i] = new int[n];
    }
        
    output[m-1][n-1] = input[m-1][n-1];
    
    for(int i=n-2;i>=0;i--){
        output[m-1][i] = input[m-1][i] + output[m-1][i+1];
    }
    
    for(int i=m-2;i>=0;i--){
        output[i][n-1] = input[i][n-1] + output[i+1][n-1];
    }
    
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            
			output[i][j] = min(output[i+1][j], min(output[i+1][j+1], output[i][j+1])) + input[i][j];
        }
    }
    
    return output[0][0];
}

int main(){
  
  return 0;
}