#include<iostream>
using namespace std;
//example of over-riding
class base{
    public:
        void fun1(){
            cout<<"fun1 from class base"<<endl;
        }
};
class derived: public base{
    public:
        using base::fun1;
        //void fun1(){//this method overides base class method i.e fun1}
        //cout<<"fun1 from class derived<<endl"
        // }
    //void fun1()    {
    //    cout<<"greetings from derived class"<<endl;
    //}

    void fun1(int a){ //overloading
        cout<<"value of a is: "<<a<<endl;
    }    
};
int main(){
    base b;
    derived d;
    b.fun1();
    d.fun1();
    d.fun1(5);
    return 0;
}