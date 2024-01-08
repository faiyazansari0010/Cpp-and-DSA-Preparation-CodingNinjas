int pairSum(int *arr, int i, int j, int num)
{
    int count=0;
    
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

int tripletSum(int *arr, int n, int num)
{
    sort(arr, arr+n);
    int answer=0;
    for(int i=0; i<n;i++){
        
        int ansFor=num-arr[i];
        int numPairs=pairSum(arr, (i+1), (n-1), ansFor);
        
        answer+=numPairs;
    }
    return answer;
}


#include<algorithm>
int tripletSum(int *arr, int n, int num){
    sort(arr, arr + n);
    int count = 0;
    for(int i=0;i<n-2;i++){
        int l=i+1;
        int r= n-1;
        int target = num - arr[i];
        while(l < r) {
        	if(arr[l] + arr[r] == target) {
                
            	if(arr[l] == arr[r]) {
                	int sizeOfSameELements = (r - l + 1);
                	count += (sizeOfSameELements) * (sizeOfSameELements - 1) / 2;
                	break;
            	}
                
                int curr = arr[l], count1 = 0;
                while(curr == arr[l]) {
                    l++;
                    count1++;
                }
                curr = arr[r];
                int count2 = 0;
                while(curr == arr[r]) {
                    r--;
                    count2++;
                }
                count += count1 * count2;
            }
            else if(arr[l]+arr[r] < target) {
                l++;
            }
            else{
                r--;
            }
        }
    }
    return count;
}