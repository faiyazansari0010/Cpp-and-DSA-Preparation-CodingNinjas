#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
#include<vector>
using namespace std;

vector<int> getPath(int** edges, bool* visited, int v, int v1, int v2){
    vector<int> path;

    if(v1==v2){
      path.push_back(v1);
      return path;
    }
    visited[v1] = true;
    for(int i=0;i<v;i++){

      if(i==v1){
        continue;
      }

      if(visited[i] == true){
        continue;
      }
      if (edges[v1][i] == 1) {
        visited[i] = true;
        path = getPath(edges, visited, v, i, v2);
      }
        if (path.size() != 0) {
          path.push_back(v1);
          return path;
        }
      }
    
    return path;
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

  int v1, v2;
  cin >> v1 >> v2;
  // visited[v1] = true;
  vector<int> result = getPath(edges, visited, v, v1, v2);

  if(result.size() != 0){
    for (int i = 0; i < result.size(); i++) {
      cout << result[i] << " ";
    }
  }
  return 0;
}

int main(){
  
  return 0;
}