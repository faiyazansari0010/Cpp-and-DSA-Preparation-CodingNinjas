#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    int N;
    cin>>N;
    
    int even=0;
    int odd=0;
    
    while(N>0){
        
        int temp=N%10;
        if(temp%2==0){
            even=even+temp;
        }
        else{
            odd=odd+temp;
        }
        N=N/10;
    }
    cout<<even<<" "<<odd;
}
