#include<iostream>
#include<cmath>
using namespace std;
int main(){ 


    int n;
    cin>>n;

    int a=0;
    
    while((a*a)<=n){
        a++;
    }
    --a;
    cout<<a;

}
    
    // int ans=sqrt(n);
    // cout<<ans;

