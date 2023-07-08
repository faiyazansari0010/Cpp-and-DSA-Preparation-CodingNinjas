#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    int x;
    cin>>x;
    int count=0;
    int i=1;
    while(count<x){
        
        int a = ((3*i)+2);
        if(a%4==0){
            i++;
            continue;
        }
        cout<<a<<" ";
        i++;
        count++;
    }
    return 0;
}
