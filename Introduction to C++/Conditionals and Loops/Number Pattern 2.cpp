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
        int b=i;
        for(int k=a;k<N;k++){
            
            cout<<b;
            b++;
        }
        cout<<endl;
    }
 return 0;   
}