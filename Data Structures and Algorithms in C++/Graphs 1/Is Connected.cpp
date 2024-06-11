#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
#include<queue>
using namespace std;

void isConnectedDfs(int** edges, int v, bool* visited, int sv){
    visited[sv] = true;

    for(int i=0;i<v;i++){
        if(i==sv){
            continue;
        }

        if(visited[i] == true){
            continue;
        }

        if(edges[sv][i] == 1){
            visited[i] = true;
            isConnectedDfs(edges, v, visited, i);
        }
    }
}

int main() {
  int v, e;
  cin >> v >> e;

  int **edges = new int *[v];
  for (int i = 0; i < v; i++) {
    edges[i] = new int[v];
    for (int j = 0; j < v; j++) {
      edges[i][j] = 0;
    }
  }

  for (int i = 0; i < e; i++) {
    int f, s;
    cin >> f >> s;
    edges[f][s] = 1;
    edges[s][f] = 1;
  }

  bool *visited = new bool[v];
  for (int i = 0; i < v; i++) {
    visited[i] = false;
  }

  isConnectedDfs(edges, v, visited, 0);
  for(int i=0;i<v;i++){
      if(visited[i] == false){
          cout<< "false";
          return 0;
      }
  }
  cout<<"true";
  return 0;
}

int main(){
  
  return 0;
}