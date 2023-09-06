void sort012(int *arr, int n)
{
    
    int s=0;
    int e=n-1;
    int mid=0;
    
    while(s<=mid and mid<=e){
        
        if(arr[mid]==0){
            
            int temp=arr[mid];
            arr[mid]=arr[s];
            arr[s]=temp;
            s++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            int temp=arr[mid];
            arr[mid]=arr[e];
            arr[e]=temp;
            e--;
        }
        
    }
    
}