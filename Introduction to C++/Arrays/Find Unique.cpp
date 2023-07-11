int findUnique(int arr[], int size)
{
    //Write your code here
    
    int a[1001]={0};
    
    for(int i=0;i<size;i++){
        a[arr[i]]++;
    }
    
    for(int i=0;i<1001;i++){
        if(a[i]==1){
            return i;
        }
    }
}