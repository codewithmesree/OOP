#include<iostream>
using namespace std;

class animal {  //abstract class
    public:
        virtual void getdetails()=0;  //pure virtual function
};

class tiger : public animal {
    public:
        void getdetails() {
            cout << "Tiger class " << endl;
        }
};

int main(){
    animal* a1 = new tiger;
    a1->getdetails();
    return 0;
}