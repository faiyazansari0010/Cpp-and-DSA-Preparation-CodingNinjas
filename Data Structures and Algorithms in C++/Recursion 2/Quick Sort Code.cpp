int partition(int arr[], int s, int e){
    
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[s]){
            count++;
        }
    }
    
    int temp=arr[s];
    arr[s]=arr[s+count];
    arr[s+count]=temp;
    
    int i=s;
    int j=e;
    
    while( i<=(s+count) & j>=(s+count) ){ 
        
        if(arr[i]<=arr[s+count]){
            i++;
        }
        
        else if(arr[j]>arr[s+count]){
            j--;
        }
        
        else{
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        
    }
    
    return s+count;
}

void helper(int arr[], int s, int e){
    
    
    
    if(s<e){ 
    int p=partition(arr, s, e);
    
    helper(arr, s, p-1);
    helper(arr, p+1, e);
    }
}

void quickSort(int arr[], int n) {
  
    helper(arr, 0, n-1);

}