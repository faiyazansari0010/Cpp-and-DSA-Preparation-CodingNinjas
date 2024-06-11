#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
#include<unordered_map>
#include<queue>
using namespace std;

void getPath(int** edges, int v, int v1, int v2, bool* visited){
    queue<int>q;
    unordered_map<int, int>mp;

    q.push(v1);
    visited[v1] = true;
    while(q.size() != 0){
        int f = q.front();
        for(int i=0;i<v;i++){
            if(i==f){
                continue;
            }
            
            if(visited[i] == true){
                continue;
            }

            if(edges[f][i] == 1){
                q.push(i);
                visited[i] = true;
                mp[i] = f;
            }
        }
        q.pop();

        if(visited[v2] == true){
        int i=v2;
        cout<<v2<<" ";
        while(i != v1){
          cout<<mp[i]<<" ";
          i = mp[i];
        }
        return;
      }

    }

    return;
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

  getPath(edges, v, v1, v2, visited);
}

int main(){
  
  return 0;
}