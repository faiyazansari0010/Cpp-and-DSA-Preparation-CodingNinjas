#include<iostream>
using namespace std;

int main() {
	
    int N;
    cin>>N;
    
    int sum=0;
    while(N>0){
        
        int ld=N%10;
        sum=sum*10+ld;
        N=N/10;
    }
    cout<<sum;
}
