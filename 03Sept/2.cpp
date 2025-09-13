/*create a class complex mnumbers x,y with constructors 
and use static variable to keep count of the number of objects*/
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
    return 0;
}