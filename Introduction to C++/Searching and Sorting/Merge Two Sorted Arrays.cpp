void merge(int *arr1, int m, int *arr2, int n, int *ans)
{
    //Write your code here    
    
    int size=m+n;
    int i=0,k=0,j=0;
    while(i<m and j<n){
        
        if(arr1[i]>arr2[j]){
            ans[k]=arr2[j];
            j++;
            k++;
        }
        else{
            ans[k]=arr1[i];
            i++;
            k++;
        }
    }
    
    while(i<m){
        ans[k++]=arr1[i++];
    }
    
    while(j<n){
        ans[k++]=arr2[j++];
    }
}