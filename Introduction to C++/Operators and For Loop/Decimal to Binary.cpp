#include<iostream>
using namespace std;

int main(){
        
    int N;
    cin>>N;
   
    long pow=1;
    long binary=0;
    
    while(N > 0){
        
        int lastBit=N%2;
        binary+= lastBit*pow;
        pow*=10;
        N=N/2;
    }
    cout<<binary;
     
}


