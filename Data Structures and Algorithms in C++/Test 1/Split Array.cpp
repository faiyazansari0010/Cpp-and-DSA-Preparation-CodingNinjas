bool helper(int input[], int size, int idx, int ls, int rs){
    
    if(idx==size){
        return ls==rs;
    }
    if(input[idx] % 5 == 0){
        return helper(input, size, idx+1, ls+input[idx], rs);
    }
    
    else if(input[idx] % 3 == 0){
        return helper(input, size, idx+1, ls, rs+input[idx]);
    }
    
    else{
        return helper(input, size, idx+1, ls, rs+input[idx]) || helper(input, size, idx+1, ls+input[idx], rs);
    }
}


bool splitArray(int *input, int size) {
    return helper(input, size, 0, 0, 0);
}