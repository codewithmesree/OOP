#include<iostream>
using namespace std;

//abstract class and pure virtual function
class animal{   // abstract class
    public:
    virtual void getdetails()=0; //pure virtual function
};

class tiger:public animal{
    public:
    void getdetails(){
        cout<<"tiger class "<<endl;
    }
};

int main(){
    animal* a1 = new tiger;
    a1->getdetails(); //overrides abstract class getdetails
    return 0;
}