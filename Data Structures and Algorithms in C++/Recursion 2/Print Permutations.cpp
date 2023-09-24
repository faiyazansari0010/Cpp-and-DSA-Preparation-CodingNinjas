#include <iostream>
#include <string>
using namespace std;

void helper(string input, string output){
    
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    
    for(int i=0; i<input.size(); i++){
        
        char start = input[i];
        string ros = input.substr(0, i) + input.substr(i+1);
        
        helper(ros, output+start);
    }
}

void printPermutations(string input){

    string output = "";
    helper(input, output);
}
