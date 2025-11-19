#include<iostream>
using namespace std;

class base{
    public:
        void get_details(){
            cout<<"from base "<<endl;
        }
};

class derived : public base{
    public:
        void get_details(){
            cout<<"from derived "<<endl;
        }
};

int main(){
    base *b1 = new base;
    derived *d1 = new derived;
    d1 = (derived*)b1;  //unsafe downcasting
    d1->get_details();   //undefined behavior
    return 0;
}