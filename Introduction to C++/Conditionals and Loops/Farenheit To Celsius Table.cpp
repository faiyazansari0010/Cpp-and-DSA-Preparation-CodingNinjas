#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int S,E,W;
    cin>>S;
    cin>>E;
    cin>>W;
    int temp;
    while(S<=E){
        temp=(S-32)*5/9;
        cout<<S<<"\t"<<temp<<endl;
        S=S+W;
    }
}