#include<bits/stdc++.h>
void removeX(char input[]) {
    if(strlen(input)==0){
        return;
    }

    if(input[0]=='x'){
        for(int i=1;i<=strlen(input);i++){
            input[i-1]=input[i];
        }
        removeX(input);
    }
  
    else{
        removeX(input+1);
    }
}
