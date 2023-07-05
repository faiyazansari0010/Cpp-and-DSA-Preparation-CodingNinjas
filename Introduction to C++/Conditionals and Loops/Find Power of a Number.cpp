#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    int x,n;
    cin>>x;
    cin>>n;
                int ans=1;

    
    if(x==0 and n==0){
        cout<<1;
    }

    else{
        
        while(n--){
            
            ans=ans*x;
        }
            cout<<ans;

    }
}