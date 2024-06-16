#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
using namespace std;

int main() {
  int v, e;
  cin >> v >> e;
  int** edges = new int *[v];
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
  
  int count, first, sec, third;
  for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
      if(edges[i][j] == 1){
        
        first = i;
        sec = j;

        for(int k = 0;k<v;k++){
          if(k == first){
            continue;
          }

          if(edges[sec][k] == 1){
            third = k;

            if(edges[third][first] == 1){
              count++;
            }

          }
        }

      }
    }
  }

  cout<< count/6;  

}

int main(){
  
  return 0;
}