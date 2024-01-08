#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

void intersection(int *arr1, int *arr2, int n, int m) 
{
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
    
    int i=0;
    int j=0;
    
    while(i<n and j<m){
        
        if(arr1[i] >= arr2[j]){
            
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                i++;
                arr2[j]=-1;
                j++;
            }
            
            else{
                j++;
            }
        }
        
        else{
            
            i++;
            j=0;
        }
    }
}