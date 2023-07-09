#include<iostream>
#include<cmath>
using namespace std;

int main() {
    
    int N;
    cin>>N;
    
	int sum = 0;
    int i=0;
    while(N>0){ 
    
    
    int lastDigit=N%10;
    sum = sum + (pow(2,i)) * lastDigit;
    i++; 
    N=N/10;
    }
    cout<< sum;
    
}
