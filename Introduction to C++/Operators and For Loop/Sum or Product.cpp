#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    
    int N;
    cin>>N;
    
    int choice;
    cin>>choice;
    
    int sum=0;
    int product=1;
    if(choice==1){
        
        for(int i=1;i<=N;i++){
            sum=sum+i;
        }
        cout<<sum;
    }
    
    else if(choice==2){
        
        for(int i=1;i<=N;i++){
            product=product*i;
        }
        cout<<product;
    }
    else{
        cout<<-1;
    }
}
