#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
       
        for(int j=1;j<=N-i;j++){
            
            cout<<" ";
        }
        
        int a=i;
        int k=i;
        while(a--){
            cout<<k;
            k++;
        }
        
        int z=k-1;
        int y=i-1;
        while(y--){
            
            cout<<--z;
        }
        cout<<endl;
    }
    return 0;
}
