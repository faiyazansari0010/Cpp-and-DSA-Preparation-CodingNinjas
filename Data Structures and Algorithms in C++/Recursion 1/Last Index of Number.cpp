
int allIndexes(int arr[], int n, int x, int out[]) {

    if(n==0){
        return 0;
    }
    
    int ans=allIndexes(arr+1, n-1, x, out);
    
    if(ans==0){
     
        if(arr[0]==x){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(arr[0]==x){
            return ans+1;
        }
        else{
            return ans;
        }
    }
    
}
