#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include <algorithm>
#include <iostream>

using namespace std;

class Edge {
public:
  int v1, v2, w;
};

bool compare(Edge e1, Edge e2) 
    { return e1.w < e2.w; }

int getParent(int n, int *parent) {
  if (parent[n] == n)
    return n;

  return getParent(parent[n], parent);
}

void kruskals(Edge *input, int n, int e ){
  sort(input, input + e, compare);

  Edge *output = new Edge[n - 1];

  int *parent = new int[n];
  for (int i = 0; i < n; i++) {
    parent[i] = i;
  }

  int count = 0;
  int i = 0;

  while (count != n - 1) {
    Edge currEdge = input[i];
    int pv1 = getParent(currEdge.v1, parent);
    int pv2 = getParent(currEdge.v2, parent);

    if(pv1 != pv2){
        output[count] = currEdge;
        count++;
        parent[pv1] = pv2;    
    }
    i++;
  }

  for (int i = 0; i < n - 1; i++) {
    if (output[i].v1 < output[i].v2) {
      cout << output[i].v1 << " " << output[i].v2 << " " << output[i].w << endl;
    }

    else {
      cout << output[i].v2 << " " << output[i].v1 << " " << output[i].w << endl;
    }
  }

}

int main() {
  int n, e;
  cin >> n >> e;
  Edge *input = new Edge[e];
  for (int i = 0; i < e; i++) {
    int v1, v2, w;
    cin >> v1 >> v2 >> w;
    input[i].v1 = v1;
    input[i].v2 = v2;
    input[i].w = w;
  }

  kruskals(input, n, e);

  return 0;
}

int main(){
  
  return 0;
}