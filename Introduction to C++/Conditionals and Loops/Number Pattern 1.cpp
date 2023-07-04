#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        
        int a=i;
        int j=i;
        while(a>0){
            
            cout<<j;
            a--;
            j++;
        }
        cout<<endl;
    }
}