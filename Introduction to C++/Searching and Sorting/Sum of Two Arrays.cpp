void sumOfTwoArrays(int arr1[], int m, int arr2[], int n, int ans[])
{        
    int a=m-1;
    int b=n-1;
    int k=max(m,n);
        
    int c=0;
    
    while(k>=0){
        
       int d=c;
        
       if(a>=0){
           d+=arr1[a];
       } 
       if(b>=0){
           d+=arr2[b];
       } 
       
        if(k==0){
            ans[k]=d;
        }
       c=d/10;
       d=d%10;
       
       ans[k]=d;
        a--;
        b--;
        k--;
    }
    
}