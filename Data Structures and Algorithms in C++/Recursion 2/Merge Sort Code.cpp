void merge(int arr[], int s, int e){
    
    int i=s;
    int mid=(s+e)/2;
    int j=mid+1;
    int size=e+1;
    int k=0;
    int ans[size];
    
    while(i<=mid && j<=e){
        if(arr[i]>=arr[j]){
            ans[k++]=arr[j++];
        }
        else{
            ans[k++]=arr[i++];
        }
    }
    
    while(i<=mid){
        ans[k++] = arr[i++];
    }
    while(j<=e){
        ans[k++] = arr[j++];
    }
    
    int a=0;
    for(int i=s;i<=e;i++){
        arr[i]=ans[a];
        a++;
    }
}

void helper(int arr[], int s, int e){
    
    if(s>=e){
        return;
    }
    
    else{
        int m=(s+e)/2;
        helper(arr, s, m);
        helper(arr, m+1, e);
        
        merge(arr, s, e);
    }
}

void mergeSort(int arr[], int n){
        
    helper(arr, 0, n-1);
}
