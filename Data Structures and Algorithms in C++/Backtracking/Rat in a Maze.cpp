#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

/*
	Note:
	To get all the test cases accepted, make recursive calls in following order: Top, Down, Left, Right.
	This means that if the current cell is (x, y), then order of calls should be: top cell (x-1, y), 
	down cell (x+1, y), left cell (x, y-1) and right cell (x, y+1).
*/
#include<bits/stdc++.h>
using namespace std;

void printPath(int n, int solution[][20]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<solution[i][j]<<" ";
        }
    }
    cout<<endl;
}

void ratInAMaze(int maze[][20], int n, int ans[][20], int x, int y){
    if(x==n-1 and y==n-1){
        ans[x][y]=1;
        printPath(n, ans);
        ans[x][y] = 0;
        return;
    }
    
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || ans[x][y] == 1){
    	return;    
    }
    
    ans[x][y] = 1;
    
    ratInAMaze(maze, n, ans, x-1, y);
    ratInAMaze(maze, n, ans, x+1, y);
    ratInAMaze(maze, n, ans, x, y-1);
    ratInAMaze(maze, n, ans, x, y+1);
    
    ans[x][y] = 0;
}

int main() {

	int n;
    cin>>n;
    int maze[20][20] = {0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>maze[i][j];
        }
    }
    
    int ans[20][20];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i][j] = 0;
        }
    }
        
    ratInAMaze(maze, n, ans, 0, 0);
	return 0;
}

int main(){
  
  return 0;
}