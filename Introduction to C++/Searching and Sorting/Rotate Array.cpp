void rotate(int arr[], int d, int n)
{
    int arr1[d];
    int a=0;
    for(int i=0;i<d;i++){
        
        arr1[i]=arr[i];
    }
    
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    
    for(int i=n-d;i<n;i++){
        arr[i]=arr1[a++];
    }
    
}