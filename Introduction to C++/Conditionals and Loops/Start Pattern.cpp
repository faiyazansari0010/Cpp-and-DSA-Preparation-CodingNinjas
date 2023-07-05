#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        
        int a=N-i;
        
        for(int j=1;j<=a;j++){
           
            cout<<" ";
        }
        
        int z=i;
        for(int k=1;k<=( (2*z) -1 );k++){
            
            cout<<"*";
        }
        
        for(int l=1;l<=a;l++){
            
            cout<<" ";
        }
        cout<<endl;
    }
    
}