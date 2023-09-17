void helper(int input[], int size, int output[], int idx){
    
    if(size==0){
        for(int i=0;i<idx;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    helper(input+1, size-1, output, idx);
    output[idx]=input[0];
    helper(input+1, size-1, output, idx+1);
    
}

void printSubsetsOfArray(int input[], int size) {
    int output[size];
    helper(input, size, output, 0);
    
}
