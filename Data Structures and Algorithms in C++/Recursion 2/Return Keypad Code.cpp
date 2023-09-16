#include <string>
using namespace std;

int keypad(int num, string output[]){
    string codes[]={"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    
    if(num==0){
        output[0]="";
        return 1;
    }
    
    int lastDigit=num%10;
    string smallOutput[500];
    int smallNum=keypad(num/10, smallOutput);
    
    string code=codes[lastDigit-2];
    
    int k=0;
    for(int i=0;i<code.size();i++){
        for(int j=0;j<smallNum;j++){
            
            output[k]=smallOutput[j]+code[i];
            k++;
        }
    }
    return k;
}
