int duplicateNumber(int arr[], int size)
{   
    int a[1000]={0};
    
    for(int i=0;i<size;i++){
        a[arr[i]]++;
    }
    
    for(int j=0;j<1000;j++){
        if(a[j]==2){
            return j;
        }
    }
}