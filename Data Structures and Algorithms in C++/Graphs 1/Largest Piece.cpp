#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>

int getSize(vector<vector<int>> &cake, int n, int i, int j, bool** &visited){
    if(visited[i][j] == true){
        return 0;
    }
    int count = 0;

    visited[i][j] = true;

    if(j-1 >= 0 ){
        if(visited[i][j-1] == false && cake[i][j-1] == 1){
            count += getSize(cake, n, i, j-1, visited);
        } 
    }

    if(j+1 < n){
        if(visited[i][j+1] == false && cake[i][j+1] == 1){
            count += getSize(cake, n, i, j+1, visited);
        } 
    }

    if(i-1 >= 0){
        if(visited[i-1][j] == false && cake[i-1][j] == 1){
            count += getSize(cake, n, i-1, j, visited);
        } 
    }

    if(i+1 < n){
        if(visited[i+1][j] == false && cake[i+1][j] == 1){
            count += getSize(cake, n, i+1, j, visited);
        } 
    }

    return count + 1;
}

int getBiggestPieceSize(vector<vector<int>> &cake, int n) {
    bool** visited = new bool*[n];
    for(int i=0;i<n;i++){
        visited[i] = new bool[n];
        for(int j=0;j<n;j++){
            visited[i][j] = false;
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(cake[i][j] == 1 && visited[i][j] == false){
                ans = max( ans, getSize(cake, n, i, j, visited) );
            }
        }
    }

    return ans;
}

int main(){
  
  return 0;
}