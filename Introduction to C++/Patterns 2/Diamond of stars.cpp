#include<iostream>
using namespace std;


int main() {
    
    int N;
    cin>>N;
    int a = (N/2) + 1;
    int r=N-a;

    for(int i=1;i<=a;i++){
        
        for(int j=1;j<=a-i;j++){
            
            cout<<" ";
        }
        int k;
        for(k=1;k<=i;k++){
            
            cout<<"*";
        }
        k--;
        for(int m=0;m<k-1;m++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    for(int c=1;c<=r;c++){
        
        int d=c;
        while(d--){
            cout<<" ";
        }
        
        for(int e=c;e<=r;e++){
            
            cout<<"*";
        }
        
        for(int f=1;f<=r-c;f++){
            
            cout<<"*";
        }
        cout<<endl;
    }
    
}
