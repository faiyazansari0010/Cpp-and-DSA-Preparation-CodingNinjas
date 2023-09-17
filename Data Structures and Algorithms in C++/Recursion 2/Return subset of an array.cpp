int subset(int input[], int n, int output[][20]) {
    
    if(n==0){
        output[0][0]=0;
        return 1;
    }
    
    int r=subset(input+1, n-1, output);
    
    for(int i=0;i<r;i++){
        
        output[i+r][0]=output[i][0]+1;
        output[i+r][1]=input[0];
        
        for(int j=2;j<=(output[i][0]+1);j++){
            output[i+r][j]=output[i][j-1];
        }
    }
return 2*r;
}
