#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<string>

bool check(vector<vector<char>> &graph, int i, int j, int n, int m, string str, bool **visited){
    if(str.size() == 0){
        return true;
    }

    int row_array[] = {i-1, i, i+1};
    int col_array[] = {j-1, j, j+1};

    for(int p=0;p<3;p++){
        
        for(int q=0;q<3;q++){

            int row = row_array[p];
            int col = col_array[q];

            if(row<0 or col<0 or row>=n or col>=m){
                continue;
            }

            if(graph[row][col] == str[0] and visited[row][col] != true){
                
                visited[row][col] = true;
                bool temp = check(graph, row, col, n, m, str.substr(1), visited);
                if(temp == true){
                    return true;
                }

                else{
                    visited[row][col] = false;
                }
            }
        }
    }

    return false;
}

bool hasPath(vector<vector<char>> &board, int n, int m) {

    string str = "CODINGNINJA";

    bool** visited = new bool*[n];
    for(int i=0;i<n;i++){
        visited[i] = new bool[m];
        for(int j=0;j<m;j++){
            visited[i][j] = false;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j] == 'C'){
                bool tempAns = check(board, i, j, n, m, "ODINGNINJA", visited);
                if(tempAns == true){
                    return 1;
                }
            }
        }
    }

    return 0;
}

int main(){
  
  return 0;
}