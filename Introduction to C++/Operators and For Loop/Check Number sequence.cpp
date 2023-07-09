#include<iostream>
using namespace std;

int main() {
	// Write your code here
	bool isDec=true;
    int n;
    cin>>n;
    
    int previous;
    cin>>previous;
    
    int count=2;
    int current;
    while(count<=n){
        
        cin>>current;
        
        if(current==previous){
            cout<<"false";
            return 0;
        }
        count++;
        
        if(current>previous){
            
            isDec=false;
            previous=current;
            continue;
        }
        
        if(current<previous){
            
            if(isDec==false){
                cout<<"false";
                return 0;
            }
        }
        
        if(current>previous){
            if(isDec==true){
                cout<<"false";
                return 0;
            }
        }
        previous=current;
    }
    cout<<"true";
}
