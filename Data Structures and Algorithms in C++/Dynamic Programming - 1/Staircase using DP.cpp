#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

// int helper(int n){
//     if(n==0 or n==1){
//         return 1;
//     }
//     if(n==2){
//         return 2;
//     }
    
//     int a = helper(n-1);
//     int b = helper(n-2);
//     int c = helper(n-3);
//     return a+b+c;
// }

int main(){
    int a = pow(10, 9)+7;
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	
        long int arr[n];
        arr[0]=1;
        arr[1]=1;
        arr[2]=2;
        
        for(int i=3;i<=n;i++){
            arr[i]=(arr[i-1]+arr[i-2]+arr[i-3]) % a;
        }
        
        cout<<arr[n]<<endl;
    }
    
    return 0;
}

int main(){
  
  return 0;
}