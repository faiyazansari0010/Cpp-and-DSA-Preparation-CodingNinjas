#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    
    int N;
    cin>>N;
    
    for(int i=N;i>=1;i--){
        
        for(int j=1;j<=i;j++){
            
            cout<<i;
        }
        cout<<endl;
    }
    
}


