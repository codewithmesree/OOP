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

class horse : public animal {
    public:
        void getdetails() {
            cout << "Horse class " << endl;
        }
};

class lion: public animal{
    public:
        //void  getdetails()
};

class cats: public tiger{
    public:
        void getdetails(){
            cout<<"I love cats"<<endl;
        }
};

int main(){
    animal* a1 = new tiger;
    animal *h1 = new horse;
    animal *c1 = new cats;
    a1->getdetails();//overrides details of abstract class
    h1->getdetails();
    c1->getdetails();
    return 0;
}