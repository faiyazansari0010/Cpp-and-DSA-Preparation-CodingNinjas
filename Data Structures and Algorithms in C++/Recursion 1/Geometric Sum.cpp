double geometricSum(int k) {
    
    if(k==0){
        return 1;
    }

    double ans=geometricSum(k-1);
    
    return ans + ( 1 / (pow(2,k)) );
}


