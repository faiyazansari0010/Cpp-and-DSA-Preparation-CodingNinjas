#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

// Memoization

// int editDistance(string s1, string s2, int** output){
//     if(s1.size() == 0 or s2.size() == 0){
//         return max(s1.size(), s2.size());
//     }
    
//     int m = s1.size(), n = s2.size();
    
//     if(output[m][n] != -1){
//         return output[m][n];
//     }
    
//     if(s1[0] == s2[0]){
//         output[m][n] = editDistance(s1.substr(1), s2.substr(1), output);
//     }
    
//     else{
//         int ans1 = 1 + editDistance(s1.substr(1), s2, output);
//         int ans2 = 1 + editDistance(s1, s2.substr(1), output);
//         int ans3 = 1 + editDistance(s1.substr(1), s2.substr(1), output);
        
//         output[m][n] = min(ans1, min(ans2, ans3));
//     }
//     return output[m][n];
// }

// int editDistance(string s1, string s2) {
    
//     int m = s1.size()+1;
//     int n = s2.size()+1;
    
//     int **output = new int*[m];
//     for(int i=0;i<=m;i++){
//         output[i] = new int[n];
//         for(int j=0;j<=n;j++){
//             output[i][j] = -1;
//         }
//     }
    
//     return editDistance(s1, s2, output);
// }


// Dynamic Programming

int editDistance(string s1, string s2) {
    
	int m = s1.size();
    int n = s2.size();
    
    int **output = new int*[m+1];
    for(int i=0;i<=m;i++){
        output[i] = new int[n+1];
    }
    
    for(int i=0;i<=m;i++){
        output[i][0] = i;
    }
    
    for(int i=0;i<=n;i++){
        output[0][i] = i;
    }
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[m-i] == s2[n-j]){
                output[i][j] = output[i-1][j-1];
            }
            
            else{
                int a = output[i-1][j];
                int b = output[i][j-1];
                int c = output[i-1][j-1];
                output[i][j] = min(a, min(b, c))+1;
            }
        }
    }
    
    return output[m][n];
}

int main(){
  
  return 0;
}