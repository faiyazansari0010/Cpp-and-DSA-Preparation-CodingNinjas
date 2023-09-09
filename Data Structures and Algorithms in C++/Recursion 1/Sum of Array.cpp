int sum(int arr[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */

    if(n==0){
        return 0;
    }
    // if(n==1){
    //     return arr[n];
    // }
    int remSum=sum(arr+1, n-1);
    int ans=arr[0]+remSum;
     return ans;
}
