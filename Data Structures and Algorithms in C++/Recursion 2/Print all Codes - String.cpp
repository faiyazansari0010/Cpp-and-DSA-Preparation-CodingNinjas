#include <string.h>
using namespace std;

void helper(string input, string output){
    
    if(input.size()==0){
        cout<<output<<endl;
        return;
    }
    
    char c1 = input[0] - '0' +'a' -1;
    helper(input.substr(1), output+c1);
    
    int c_2 = stoi(input.substr(0, 2));
    if(c_2>=10 and c_2<=26){
        
        char c2 = c_2 + 'a' - 1;
        helper(input.substr(2), output+c2);
    }
}

void printAllPossibleCodes(string input) {
    
    string output="";
    helper(input, output);
}