#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int n) {
    // Write your code here
//     int array[1000000];
    
//     for(int i=0; i<n; i++){
//         array[arr[i]] += 1;
//     }
    
//     for(int i=0; i<1000000; i++){
//         if(array[i] == 1){
//             cout<<i;
//             break ;
//         }
//     }
    
    sort(arr, arr+n);
    
    int i=0;
    int ans=0;
    while(i<n){
        if(arr[i] == arr[i+1]){
            i+=2;
        }
        
        else{
            ans=arr[i];
            break;
        }
    }
    
    return ans;
}