#include<bits/stdc++.h>
int stringToNumber(char input[]) {

    static int a=0;
    
    if(strlen(input)==0){
        return a;
    }
    
    int b=input[0]-48;
    
    a=(a*10)+b;
    
    stringToNumber(input+1);
}