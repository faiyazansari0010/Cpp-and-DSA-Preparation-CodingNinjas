#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  
    int N;
    cin>>N;
    if(N==1){
        cout<<0;
    }
    // else if(N==2){
    //     cout<<1;
    // }
    else{
        
        for(int i=2;i<=N;i++){
                bool flag=1;

            int a=i;
            for(int j=2;j<i;j++){
                if(a%j==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                cout<<a<<endl;
            }
        }
    }
    return 0;
}


