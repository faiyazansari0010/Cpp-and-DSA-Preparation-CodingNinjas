int firstIndex(int arr[], int n, int x) {
                    
    if(n==0){
        return -1;
    }
    
    if(arr[0]==x){
        return 0;
    }
    
    int ans=firstIndex(arr+1, n-1, x);
    
    if(ans!=-1)
    {
   
    return ans+1;
        
    }
    else
        return -1;
}
