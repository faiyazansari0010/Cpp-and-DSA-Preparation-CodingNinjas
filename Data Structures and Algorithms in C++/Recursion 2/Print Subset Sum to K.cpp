void helper(int input[], int size, int output[], int idx, int k){
    
    if(size==0){
        int sum=0;
        for(int i=0; i<idx; i++){
            sum=sum+output[i];
        }
        
        if(sum==k){
            for(int i=0; i<idx; i++){
                cout<<output[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    
    
    output[idx]=input[0];
    helper(input+1, size-1, output, idx+1, k);
    helper(input+1, size-1, output, idx, k);
    
}

void printSubsetSumToK(int input[], int size, int k) {
    
    int output[1000];
    helper(input, size, output, 0, k);
}