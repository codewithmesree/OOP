/*Create a class Fraction with numerator and denominator. Overload
constructors to:
• Initialize fraction as 0/1.
• Initialize with numerator only (denominator = 1).
• Initialize with numerator and denominator.*/

#include<iostream>
using namespace std; 

class Fraction{
    private:
        int num;
        int denom; 
    public: 
    //default constructor 
    Fraction(){
        num=0;
        denom=1;
    }

    Fraction(int num){
        this->num=num;
        denom=1;
    }
    Fraction(int num, int denom){
        this->num=num;
        this->denom=denom;
    }

    void display(){
        cout<<this->num<<endl<<"____"<<endl<<this->denom<<endl;
    }
};

int main(){
    Fraction f1;
    f1.display();
    cout<<"---------------------";
    Fraction f2(8);
    f2.display();
    cout<<"---------------------";
    Fraction f3(1,2);
    f3.display();
    cout<<"---------------------";
}