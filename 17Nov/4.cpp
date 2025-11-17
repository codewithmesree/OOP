#include<iostream>
using namespace std;

class base{
    public:
    void h(){
        cout<<"base class h"<<endl;
    }

    virtual void g(){
        cout<<"base class g"<<endl;
    }

    virtual void g(int a){
        cout<<"base class g with int"<<endl;
    }
};

class derived: public base{
    public:
    virtual void h(){
        cout<<"derived class h"<<endl;
    }
};

class derived2: public derived{
    public:
    void h(){
        cout<<"derived2 class h"<<endl;
    }
};

int main(){
    base b1;
    derived d1;
    derived2 d2;
    base* bptr = &b1;
    derived* dptr = &d1;
    derived2* dptr2 = &d2;
    //bptr = dptr;    //upcasting
    dptr = dptr2; //upcasting
    //dptr2 = dptr; //downcasting not allowed
    bptr->h();
    dptr->h();
    dptr2->h();

    return 0;
}