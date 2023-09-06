#include<cmath>
#include<climits>
int findSecondLargest(int arr[], int n)
{
    int count=1;
    int ans=INT_MAX;    

    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            count++;
        }
    }
    if(count==n or n<=1){
        return pow(-2,31);
    }
    
    else{
        
        int secMax=arr[0];
        
        for(int i=1;i<n;i++){
            
            if(arr[i]>secMax){
                secMax=arr[i];
            }
        }
        
        for(int i=0;i<n;i++){
            
            if(secMax != arr[i]){
                int a=secMax-arr[i];
                ans=min(ans,a);
            }
            
        }
        return secMax-ans;
    }
    
}