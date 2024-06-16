#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

// int findMinVertex(int* weight ,bool *visited ,int v)
// {
//     int MinVertex=-1;
//     for(int i=0 ;i<v ;i++)
//     {
//         if(!visited[i] &&(MinVertex==-1 ||weight[i] < weight [MinVertex]))
//             MinVertex=i;
//     }
//     return  MinVertex;
// }

// void primsMST(int** graph, int v, int e){
//     bool* visited = new bool[v];
//     int* parent = new int[v];
//     int* weight = new int[v];
//     for(int i=0;i<v;i++){
//         visited[i] = false;
//         weight[i] = INT_MAX;
//     }
//     weight[0] = 0;
//     parent[0] = -1;

//     for(int i=0;i<v;i++){
//         int minVertex = findMinVertex(weight, visited, v);
//         visited[minVertex] = true;

//         for(int j=0;j<v;j++){

//             if(i==j){
//                 continue;
//             }

//             if(graph[minVertex][j] > 0 && visited[j] == false){
//                 if(graph[minVertex][j] < weight[j]){
//                     weight[j] = graph[minVertex][j];
//                     parent[j] = minVertex;
//                 }
//             }
//         }
//     }
// // cout<<"\n\n";   
//     for(int i=1;i<v;i++){
//         if(parent[i] < i){
//             cout<<parent[i]<<" "<<i<<" "<<weight[i]<<endl;
//         }

//         else{
//             cout<<i<<" "<<parent[i]<<" "<<weight[i]<<endl;
//         }
//     }
// }







int findMin(bool* visited, int* distance, int v){
    int minDist = -1;
    int min = INT_MAX;
    for(int i=0;i<v;i++){
        if(!visited[i] && distance[i] < min){
            minDist = i; min = distance[i];
        }
    }
    return minDist;
}

void dijkstra(int** graph, int v, int e){
    bool* visited = new bool[v];
    int* distance = new int[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
        distance[i] = INT_MAX;
    }
    int dist;
    distance[0] = 0;
    for(int i=0;i<v;i++){
        int minDist = findMin(visited, distance, v);
        visited[minDist] = true;

        for(int j=0;j<v;j++){
            if(!visited[j] && graph[minDist][j] > 0){
                dist = graph[minDist][j] +distance[minDist];
                if(dist < distance[j]){
                    distance[j]=dist;
                }
            }
        }
    }

    for(int i=0;i<v;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
}


int main() {
    int v, e;
    cin>>v>>e;
    int** graph = new int*[v];
    for(int i=0;i<v;i++){
        graph[i] = new int[v];
        for(int j=0;j<v;j++){
            graph[i][j] = 0;
        }
    }

    for(int i=0;i<e;i++){
        int f, s, w;
        cin>>f>>s>>w;
        graph[f][s] = w;
        graph[s][f] = w;
    }
    dijkstra(graph, v, e);
    return 0;
}

int main(){
  
  return 0;
}