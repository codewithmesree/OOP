#include<iostream>
using namespace std;
//Template, user name space, macro, no stl

class base{
    public:
    void f(int a){
        cout<<"base class f"<<endl;
    }
        //void g(){
        //    cout<<"base class g"<<endl;
        //}
    void f(){
        cout<<"no int base class f"<<endl;
    }
};

class derived: public base{
    public:
    using base::f; 
    void f(){
        cout<<"derived class f"<<endl;
    }
};

int main(){
    base b1;
    derived d1;
    b1.f();
    d1.f();
    b1.f(4);
    d1.f(6);
    return 0;
}