int subsetSumToK(int input[], int n, int output[][50], int k) {
    
    if(n==0){
        if(k==0){
            output[0][0]=0;
            return 1;
            }
        else{
            return 0;
        }
    }
    
    int arr1[1000][50], arr2[1000][50];

    int S1=subsetSumToK(input+1, n-1, arr1, k);
    int S2=subsetSumToK(input+1, n-1, arr2, k-input[0]); 
        
    for(int i=0;i<S1;i++){
        
        output[i][0]=arr1[i][0];
        
        for(int j=1;j<=arr1[i][0];j++)
        {
            output[i][j]=arr1[i][j];
        }
    }
    
    for(int i=0;i<S2;i++)
    {
        output[i+S1][0]=arr2[i][0]+1;
        output[i+S1][1]=input[0];
        
        for(int j=2;j<=(arr2[i][0]+1) ;j++)
        {
            output[S1+i][j]=arr2[i][j-1];
        }
    }
    return S1+S2;  
}