#include<iostream>
using namespace std;
class base{
    public:
        int a = 4;
};
class derived: public base{
    public:
        int b = 5;
        int c = 6;
};

int main(){
    base ob;
    base* obptr = &ob;
    cout<<"Value of a in base class: "<<obptr->a<<endl;
    derived od;
    derived* odptr = &od;
    //obptr = odptr; //UPCasting //implicit casting allowed here
    //cout<<"Value of a: "<<obptr->a<<endl;
    //odptr= (derived*)obptr; //explicit casting downcasting

    //explicit casting
    obptr = (derived*)odptr;    //explicit upcasting

    /*Downcasting - data is lost so the value is wrong in output
    but in upcasting , this error won't be there*/

    cout<<"Values of a,b and c in derived class are: "<<odptr->a<<" "<<odptr->b<<" "<<odptr->c<<endl;
    return 0;
}