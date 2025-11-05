/*Create a Complex class with:
• Private: real, imag
• Public: Constructor, display()
• Friend function: addComplex() to add two complex numbers*/

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int real,int imag){
            this->real=real;
            this->imag=imag;
        }

        void display(){
            cout<<"The real part is: "<<real<<endl<<"The imaginary part is: "<<imag<<endl;
        }

        friend void addComplex(Complex &c,Complex &c1);
};

void addComplex(Complex &c,Complex &c1){
    int realsum = c.real+c1.real ;
    int imagsum = c.imag+c1.imag;
    cout<<"The sum of the real part is: "<<realsum<<endl;
    cout<<"The sum of the imaginary part is: "<<imagsum<<endl;
}

int main(){
    Complex c1(3,4),c2(4,6);
    c1.display();
    c2.display();
    addComplex(c1,c2);
    return 0;
}