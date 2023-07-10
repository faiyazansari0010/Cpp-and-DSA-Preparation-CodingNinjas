#include<iostream>
using namespace std;


int main(){

  // Write your code here

    
    int N;
    cin>>N;
    
    for(int i=1;i<=N;i++){
        
        int a=(N - (i-1));
        for(int j=1;j<=a;j++){
            
            cout<<j;
        }
        
        int b=i-1;
        for(int k=1;k<=b;k++){
            cout<<"*";
        }
        
        int c=i-1;
        
        for(int l=1;l<=c;l++){
            cout<<"*";
        }
        
        for(int d=(N-(i-1)); d>=1;d--){
            cout<<d;
        }
        cout<<endl;
    }
    
}


