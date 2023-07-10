
bool checkMember(int n){

  /* Don't write main().
   * Don't read input, it is passed as function argument.
   * Return output and don't print it.
   * Taking input and printing output is handled automatically.
  */
int a=n+1;
    int t0=0;
    int t1=1;
    int fibNo;
    if(n==t0){
            return true;
        }
    while(a--){
            
        if(n==t1){
            return true;
        }
        fibNo=t0+t1;
        if(fibNo==n){
            return true;
        }
        t0=t1;
        t1=fibNo;
    }
    return false;
    }

