/* Create a class Complex with two data members real and imag. Over-
load constructors to:
• Initialize both to zero (default constructor).
• Initialize with one value (real part only).
• Initialize with two values (real and imaginary parts). */

#include<iostream>
using namespace std; 

class Complex{
    private:
        int real;
        int imag;

    public:
        //default constructor
        Complex(){
            real=0;
            imag=0;
        }

        //parameterized constructor
        Complex(int r, int i){
            real=r;
            imag=i;
        }

        Complex(int r){
            real=r;
            imag=0;
        }

        void display(){
            cout<<"Real part: "<<real<<endl;
            cout<<"Imaginary part: "<<imag<<endl;
        }
    };

int main(){
    Complex c1;
    cout<<"The details of the first complex parts are:"<<endl;
    c1.display();
    Complex c2(24);
    cout<<"The details with the real part alone:"<<endl;
    c2.display();
    Complex c3(24,24);
    cout<<"The details with real and imaginary part:"<<endl;
    c3.display();
    return 0;
}