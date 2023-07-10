#include<iostream>
using namespace std;

int main(){

  // Write your code here  
  
    
    int N;
    cin>>N;
    
    for(int i=1;i<=N;i++){
        
        for(int k=1;k<=N-i;k++){
            cout<<" ";
        }
        
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        
        for(int c=2;c<=i;c++){
            cout<<c;
        }
        cout<<endl;
    }
  
}

