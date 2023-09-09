bool checkNumber(int arr[], int n, int x) {
  
    if(n==0){
        return false;
    }
    
    if(arr[0]==x){
        return true;
    }
    
    checkNumber(arr+1, n-1, x);

}
