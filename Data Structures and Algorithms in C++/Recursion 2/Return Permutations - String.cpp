#include <string>
using namespace std;

int returnPermutations(string input, string output[]){
   	
    if(input.size()==0){
        output[0]="";
        return 1;
    }
    
    string ros[1000];
    
    int nos = returnPermutations(input.substr(1), ros);
    
    int k=0;
    for(int i=0; i<ros[0].size()+1; i++){
        
        for(int j=0; j<nos; j++){
            
            string temp = ros[j];
            
            output[k++] = temp.insert(i, input.substr(0, 1));
        }
    }
    return k;
}
