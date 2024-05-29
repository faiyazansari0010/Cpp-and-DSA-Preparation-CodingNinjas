#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int board[11][11];
bool isSafe(int n, int row, int col){
    for(int i=row-1;i>=0;i--){
        if(board[i][col] == 1)
            return false;
    }
    
    for(int i=row-1, j=col-1;i>=0 && j>=0;i--, j--){
        if(board[i][j] == 1)
            return false;
    }
    
    for(int i=row-1, j=col+1; i>=0 && j<n;i--,j++){
        if(board[i][j]==1)
            return false;
    }
    return true;
}

void printNqueens(int n, int row){
    if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    
    else{
        for(int k=0;k<n;k++){
            if(isSafe(n, row, k)){
                board[row][k]=1;
                printNqueens(n, row+1);
                board[row][k]=0;
            }
        }
    }
}

int main(){
    
    int n;
    cin>>n;
    printNqueens(n, 0);
    return 0;
}

int main(){
  
  return 0;
}