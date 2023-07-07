#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int N;
    cin>>N;
    
    for(int i=1;i<=N;i++){
        
        int space=N-i;
        for(int j=0;j<space;j++){
            
            cout<<" ";
        }
        
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        cout<<endl;
    }
    
}


