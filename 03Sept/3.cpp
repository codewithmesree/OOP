/*Create a public method which takes two parameters as complex itself*/

#include<iostream>
using namespace std; 

class Complex{
    private:
        float x;
        float y; 
    public:
    static int total_objects; //declaration of static variables
    Complex(float real,float imag){
        this->x=real;
        this->y=imag;
        this->total_objects+=1;
    }

    void sum_complex(Complex a1, Complex a2){   //passing the constructor itself through a fn
        cout<<"The sum of both complex numbers is:"<<a1.x+a2.x<<"i  + "<<a1.y+a2.y<<endl;    
    }

        void get_details(void){
        cout<<"Real:"<<this->x<<endl;
        cout<<"Imaginary:"<<this->y<<endl;
        cout<<"Total objects:"<<total_objects<<endl;
    }
};

int Complex::total_objects = 0;
int main(){
    Complex c1(1.65,2.3);
    c1.get_details();
    Complex c2(1.3,5.0);
    c2.get_details();
    c1.sum_complex(c1,c2);
    return 0;
}