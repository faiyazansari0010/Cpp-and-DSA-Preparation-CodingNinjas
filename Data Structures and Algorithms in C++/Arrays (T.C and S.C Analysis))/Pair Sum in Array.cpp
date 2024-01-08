int pairSum(int *arr, int n, int num)
{
        sort(arr,arr+n);

    int i=0; int j=n-1; int count=0;
    
    while(i<j){
        int sum=arr[i]+arr[j];
        
        if(sum<num){
            i++;
        }
        else if(sum>num){
            j--;
        }
        
        else if(sum==num){
            
            if(arr[i] == arr[j]){
                int temp=j-i;
                count += (temp*(temp+1)) / 2;
                return count;
            }
            
            int p=1, q=1;
            
            for(int k=i+1; k<j;k++){
                if(arr[k]==arr[i]){
                    p++;
                }
                
                else if(arr[k]==arr[j]){
                    q++;
                }
            }
            count=count+(p*q);
            i+=p;
            j-=q;
        }
    }
    return count;
}