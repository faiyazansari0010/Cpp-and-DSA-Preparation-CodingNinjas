
int allIndexes(int arr[], int n, int x, int out[]) {

    if(n==0){
        return 0;
    }
    
    int ans=allIndexes(arr, n-1, x, out);
    
    
    if(arr[n-1]==x){
        out[ans]=n-1;
        return ans+1;
    }
    else{
        return ans;
    }
    
//     if(ans==0){
//         if(arr[n-1]!=x){
//             return 0;
//         }
//         else{
//             return ans+1;
//         }
//     }
    
//     else{
        
//         if(arr[n-1]==x){
//             out[ans]=n-1;
//             return ans+1;
//         }
//         else{
//             return ans;
//         }
//     }
    
}
