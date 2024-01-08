void rotate(int *input, int d, int n)
{
    int arr[d];
    
    for(int i=0;i<d;i++){
        arr[i]=input[i];
    }
    
    for(int i=0;i<n-d;i++){
        input[i]=input[i+d];
    }
    int k=0;
    for(int i=n-d;i<n;i++){
        input[i]=arr[k++];
    }
}