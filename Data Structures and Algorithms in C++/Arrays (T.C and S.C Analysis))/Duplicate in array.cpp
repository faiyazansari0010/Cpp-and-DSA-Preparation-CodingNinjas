int findDuplicate(int *arr, int n){ 
// {
//     int r=0;
    
//     for(int i=0;i<n; i++){
//         r=r^arr[i];
//     }
    
    
//     for(int i=0; i<n-1; i++){
//         r=r^i;
//     }
    
//     return r;
    
    int sum=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    
    int c=0;
    
    for(int i=0; i<n-1; i++){
        c+=i;
    }
    
    return sum-c;
}