#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
using namespace std;
#include<queue>

bool hasPathBfs(int **edges, int v, int v1, int v2, bool *visited)
{
    if (v2 >= v || v1 >= v)
        return false;
    if (v1 == v2)
        return true;
    if (edges[v1][v2] || edges[v2][v1])
        return true;
    queue<int> pendingVertices;
    pendingVertices.push(v1);
    visited[v1] = true;
    while (!pendingVertices.empty())
    {
        for (int i = 0; i < v; i++)
        {
            if (i == pendingVertices.front())
                continue;
            if (visited[i])
                continue;
            if (edges[pendingVertices.front()][i])
            {
                pendingVertices.push(i);
                visited[i] = true;
            }
        }
        pendingVertices.pop();
        if (visited[v2])
            return true;
    }
    return false;
}

bool hasPathDfs(int **graph, int v, int s, int e, bool *visited) {
  if (graph[s][e] == 1)
    return true;

  visited[s] = true;

  bool res = false;

  for (int i = 0; i < v; i++) {
    if (!visited[i] && graph[s][i] == 1)
      res = hasPathDfs(graph, v, i, e, visited);
    if (res == true)
      return true;
  }

  return res;
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

  bool* visited = new bool[v];
  for(int i=0;i<v;i++){
      visited[i] = false;
  }
  int v1, v2;
  cin >> v1 >> v2;

  if( hasPathBfs(edges, v, v1, v2, visited) == true){
      cout<<"true";
  }

  else{
      cout<<"false";
  }
}

int main(){
  
  return 0;
}