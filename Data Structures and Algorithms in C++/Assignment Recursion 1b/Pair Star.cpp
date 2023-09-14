#include<bits/stdc++.h>
void pairStar(char input[]) {
    
    if(strlen(input)==0){
        return;
    }
    
    if(input[0]==input[1]){
        for(int i=strlen(input); i>=1; i--){
            input[i+1]=input[i];
        }
        input[1]='*';
        
        pairStar(input+2);
    }
    
    else{
        pairStar(input+1);
    }
}
