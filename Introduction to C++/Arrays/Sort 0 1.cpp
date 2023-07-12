void sortZeroesAndOne(int arr[], int size)
{
    
    int a=0;
    int b=size-1;
    
    while(a<b){
        
        if(arr[a] ==1 and arr[b]==0){
            int temp=arr[a];
            arr[a]=arr[b];
            arr[b]=temp;
            a++;
            b--;
        }
        
        else if(arr[a]==1 and arr[b]==1){
            b--;
        }
        
        else if(arr[a]==0 and arr[b]==0){
            a++;
        }
        else if(arr[a]==0 and arr[b]==1){
            a++;
            b--;
        }
        
    }
    
}