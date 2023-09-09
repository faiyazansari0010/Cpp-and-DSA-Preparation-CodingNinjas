void minLengthWord(char arr[], char ans[]){
		
	int minimum=100001;
    int length=0;
    for(int i=0;arr[i]!='\0';i++){
        length++;
    }
    
    int si;
    int size;
    
    int len=0;
    for(int i=0;i<=length;i++){
        if(arr[i] != ' ' and arr[i] != '\0'){
           len++;
        }
        
        else {
            if(len<minimum){
                minimum=len;
                size=len;
                si=i-len;
            }
            len=0;
        }
    }
    int a=0;
    while(size--){
        ans[a]=arr[si];
        si++;
        a++;
    }
}


