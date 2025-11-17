//dynamic binding example

#include<iostream>
using namespace std;

class Base{
    public:
    virtual void f(){
        cout<<"f from base"<<endl;
    }

    virtual void g(){
        cout<<"g from base"<<endl;}
};

class derived: public Base{
    public:
    virtual void f(){
        cout<<"derived class f"<<endl;
    }

    virtual void g(){
        cout<<"derived class g"<<endl;
    }
};
//dynamic binding
int main(){
    Base b1;
    derived d1;
    b1.f(); //dynamic binding
    b1.g(); //dynamic binding
    d1.f(); //dynamic binding
    d1.g(); //dynamic binding

    Base* bptr = &b1;
    derived* dptr = &d1;
    bptr->f(); //dynamic binding
    bptr->g(); //dynamic binding
    dptr->f(); //dynamic binding
    dptr->g(); //dynamic binding
    return 0;
}