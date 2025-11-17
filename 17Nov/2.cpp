#include<iostream>
using namespace std;

class Base{
    public:
    void f(){
        cout<<"f from base"<<endl;
    }

    void g(){
        cout<<"g from base"<<endl;}
};

class derived: public Base{
    public:
    void f(){
        cout<<"derived class f"<<endl;
    }

    void g(){
        cout<<"derived class g"<<endl;
    }
};

//static binding
int main(){
    Base b1;
    derived d1;
    b1.f(); //static binding
    b1.g(); //static binding
    d1.f(); //static binding
    d1.g(); //static binding

    Base* bptr = &b1;
    derived* dptr = &d1;
    bptr->f(); //static 
    bptr->g(); //static binding
    dptr->f(); //static binding
    dptr->g(); //static binding
    return 0;
}