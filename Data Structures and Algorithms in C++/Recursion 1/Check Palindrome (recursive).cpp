intr#include<bits/stdc++.h>

bool checkPalindrome(char input[]) {
    // Write your code here

    if(strlen(input) == 1 || strlen(input) == 0) return true;
	if(input[0] == input[strlen(input) - 1]){
        input[strlen(input) - 1] = '\0';
        return checkPalindrome(input+1);
    }
    else return false;
    
}


