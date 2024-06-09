#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
#include<queue>
using namespace std;

void printDFS(int** edges, int v, int sv, bool* visited){
    cout<<sv<<" ";
    visited[sv] = true;
    for(int i=0;i<v;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i] == 1){
            if(visited[i] == true){
                continue;
            }
            printDFS(edges, v, i, visited);            
        }
    }
}

void printBFS(int** edges, int v, int sv, bool*visited){
    queue<int> q;
    q.push(sv);
    visited[sv] = true;

    while(q.size() != 0){
        int a = q.front();
        q.pop();
        cout<<a<<" ";

        for(int i=0;i<v;i++){
            if(i==a){
                continue;
            }

            if(edges[a][i] == 1 and visited[i] == false){
                q.push(i);
                visited[i] = true;
            }
        }
    }  
}

void dfs(int** edges, int v){
    bool* visited = new bool[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            printDFS(edges, v, i, visited);
        }
    }
}

void bfs(int** edges, int v){
    bool* visited = new bool[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }

    for(int i=0;i<v;i++){
        if(visited[i] == false){
            printBFS(edges, v, i, visited);
        }
    }
}

int main() {
    int v, e;
    cin>>v>>e;
    int** edges = new int*[v];
    for(int i=0;i<v;i++){
        edges[i] = new int[v];
        for(int j=0;j<v;j++){
            edges[i][j] = 0;
        }
    }

    for(int i=0;i<e;i++){
        int f, s;
        cin>>f>>s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    // cout<<"BFS :"<<endl;
    bfs(edges, v);
    // cout<<endl;
    // cout<<"DFS :"<<endl;
    // dfs(edges, v);
    return 0;
}

int main(){
  
  return 0;
}