int binarySearch(int arr[], int n, int val)
{
    //Write your code here
    
    int s=0;
    int e=n-1;
    
    while(s<=e){
        
        int mid=(s+e)/2;
        
        if(arr[mid]==val){
            return mid;
        }
        
        else if(arr[mid]>val){
            e=mid-1;
        }
        
        else{
            s=mid+1;
        }
        
    }
    return -1;
}