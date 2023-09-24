#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int getCodes(string input, string output[10000]) {
    
    if(input[0]=='\0'){
        output[0]="";
        return 1;
    }
    
    string s1[1000], s2[1000];
    int res1, res2=0; int k=0;
    
    res1=getCodes(input.substr(1), s1);
    
    if(input[1]!='\0'){
        res2=getCodes(input.substr(2), s2);
    }
    
    char c1 = input[0]-'0'+'a'-1;
    for(int i=0; i<res1; i++){
        output[k++]=c1+s1[i];
    }
    
    int c_2 = stoi( input.substr(0, 2) );
    if(c_2>=10 and c_2<=26){
        char c2 = c_2+'a'-1;
        for(int i=0; i<res2; i++){
            output[k++] = c2+s2[i];
        }
    }
    
    return k;
}