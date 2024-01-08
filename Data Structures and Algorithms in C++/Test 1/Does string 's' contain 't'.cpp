#include<bits/stdc++.h>

using namespace std;
bool check(char large[], char*small, int i, int j){
    
    if(j==strlen(small)){
        return true;
    }
    
    if(i==strlen(large) and j<strlen(small)){
        return false;
    }
    if(large[i] == small[j]){
        // count++;
        check(large, small, i+1, j+1);
    }
    
    else if(large[i] != small[j]){
        check(large, small, i+1, j);
    }
    
    
}

bool checksequenece(char large[] , char*small) {
    // int count = 0;
    check(large, small, 0, 0);    
}
