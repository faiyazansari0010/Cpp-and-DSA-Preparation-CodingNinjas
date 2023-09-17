int helper(int input[], int s, int e, int element){
    
    if(s>e){
        return -1;
    }
    
    int mid=(s+e)/2;
    
    if(input[mid]==element){
        return mid;
    }
    
    else if(input[mid]<element){
        helper(input, mid+1, e, element);
    }
    
    else{
        helper(input, s, mid-1, element);        
    }
    
    
}


int binarySearch(int input[], int size, int element) {
    
    return helper(input, 0, size-1, element);
    
}
