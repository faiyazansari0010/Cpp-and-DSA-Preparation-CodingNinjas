void pushZeroesEnd(int arr[], int n)
{
    //Write your code here
    int count =0;
    for(int i=0;i<n;i++){
        
        if(arr[i] != 0){
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
    
}