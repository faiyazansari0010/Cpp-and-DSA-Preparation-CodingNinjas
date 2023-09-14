void removeConsecutiveDuplicates(char str[]) {
	
    if(str[0]=='\0'){
        return;
    }
    
    if(str[0] != str[1]){
        removeConsecutiveDuplicates(str+1);
    }
    
    else{
        
        for(int i=0; str[i]!='\0';i++){
            str[i]=str[i+1];
        }
        
        removeConsecutiveDuplicates(str);
    }

}