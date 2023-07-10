// #include<iostream>
// using namespace std;
// #include <climits>
// #include <bits/stdc++.h>


// int main(){
    
//     // Write your code here
    
//     int N;
//     cin>>N;
//     if(N==0 or N==1){
//         cout<<INT_MIN;
//         return 0;
//     }
    
//     int arr[N];
//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }
    
//     sort(arr,arr+N);
    
//     bool flag=true;
    
//     for(int i=0;i<N;i++){
//         if(arr[i]!=arr[i+1]){
//             flag=false;
//             break;
//         }
//     }
    
//     if(flag==false){
        
//         int a=arr[N-1];
//         for(int i=N-2;i>=0;i--){
//             if(arr[i] <a ){
//                 cout<<arr[i];
//                 return 0;
//             }
//         }
//     }
    
//     else if(flag==true){
        
//         cout<<INT_MIN;
//     }
    
// }


#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n;
    cin >> n;
    int max = INT_MIN, secondMax = INT_MIN;
    int num;
    int count = 1;
    while(count <= n) {
        cin >> num;
        if(num > max) { 
            secondMax = max;
            max = num;
        } 
        else if(num > secondMax && num != max) {
            secondMax = num;
        }
        count++;
    }
    cout << secondMax << endl;
}