#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
#include<vector>
using namespace std;

void getComponents(int** edges, int v, bool* visited, int sv, vector<int> &temp){
  temp.push_back(sv);
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
            getComponents(edges, v, visited, i, temp);
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
  
  int ans = 0;

  for(int i=0;i<v;i++){
    if(visited[i] == false){
      vector<int> temp;
      getComponents(edges, v, visited, i, temp);
      if(temp.size() >= 1){
        ans++;
      }
    }
  }

  cout<<ans;
  return 0;  
}

int main(){
  
  return 0;
}