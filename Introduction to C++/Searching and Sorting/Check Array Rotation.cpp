int arrayRotateCheck(int arr[], int n)
{
    //Write your code here
    bool check =false;
    
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            check=true;
            return i;
        }
    }
    if(check==false){
        return 0;
    }
}