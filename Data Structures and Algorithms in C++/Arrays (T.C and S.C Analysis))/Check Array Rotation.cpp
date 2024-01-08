int arrayRotateCheck(int *input, int size)
{
    
    if(size==1 or size ==0){
        return 0;
    }
    int ans=0;
    for(int i=1; i<size;i++){
        if(input[i]<input[i-1]){
            return i;
        }
    }
    
    return 0;
    
}