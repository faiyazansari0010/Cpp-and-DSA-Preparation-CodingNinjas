void Leaders(int arr[],int len)
{
	/* Don't write main().
	 * Don't read input, it is passed as function argument.
	 * Print your output exactly in the same format as shown. 
	 * Don't print any extra line.
	*/
    int ans[len];
    int largest=INT_MIN;
    int j=0;
    for(int i=len-1;i>=0;i--){
        
        if(arr[i]>=largest){
            largest=arr[i];
            ans[j]=arr[i];
            j++;
        }
    }
    
    for(int i=j-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    
}
