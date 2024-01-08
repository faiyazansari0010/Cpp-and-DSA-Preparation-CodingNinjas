/**********
 
Following is the main function we are using internally.
Refer this for completing the ComplexNumbers class.
 
 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 
 ************/
#include<bits/stdc++.h>

using namespace std;

class ComplexNumbers {
    private:
    int real, imaginary;
    
    public:
    ComplexNumbers(int r, int imag){
        real = r;
        imaginary = imag;
    }
    
    void print(){
        cout<< real << " + " << 'i' << imaginary << endl;
    }
    
    void plus(ComplexNumbers c2){
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }
    
    void multiply(ComplexNumbers c2){
        int r = real*c2.real + (-1 * imaginary * c2.imaginary);
        int img = (real*c2.imaginary) + (imaginary*c2.real);
        real=r;
        imaginary=img;
    }
};