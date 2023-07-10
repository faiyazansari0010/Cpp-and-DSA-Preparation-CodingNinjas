void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
             C=(S-32)*5/9;

     */
    
    for(int i=start;i<=end;i+=step){
        
        int c=(i-32)*5/9;
        
        cout<<i<<" "<<c<<endl;
    }
    
}


