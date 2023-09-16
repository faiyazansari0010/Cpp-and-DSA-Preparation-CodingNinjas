#include <bits/stdc++.h>
bool helper(char input[], int idx){    
    
    if(idx>=strlen(input)){
        return true;
    }
    
    if(input[idx]=='a'){
        
        if(input[idx+1]=='a'){
           return helper(input, idx+1);
        }
        if(input[idx+1]=='\0')
            return helper(input,idx+1);
         if(input[idx+1]=='b' and input[idx+2]=='b'){
        return helper(input,idx+3);
         }
    
    }
     return false;
}

bool checkAB(char input[]) {

    return helper(input, 0);
    
}



