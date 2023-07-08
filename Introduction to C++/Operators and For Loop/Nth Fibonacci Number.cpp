#include<iostream>
using namespace std;


int main(){
    //Write your code here.    
    int t1=1;
    int t2=1;
    int N;
    cin>>N;
    int ans=0;
    int a=N-2;
    
    if(N<3){
        cout<<1;
    }
    else{
        
        for(int i=1;i<=a;i++){
            
            ans=t1+t2;
            t1=t2;
            t2=ans;
        }
        cout<<ans;
    }
}
