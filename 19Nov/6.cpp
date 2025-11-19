#include<iostream>
using namespace std;

class animal {  //abstract class
    public:
        virtual void getdetails(){
            cout<<"Hello from animal kingdom"<<endl;
        }  //pure virtual function
};

class tiger : public animal {
    public:
        void getdetails() {
            animal::getdetails();
            cout << "Tiger class " << endl;
        }
};

class horse : public animal {
    public:
        void getdetails() {
            animal::getdetails();
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
            animal::getdetails();
            cout<<"I love cats"<<endl;
        }
};

int main(){
    animal*arr[] = {new tiger, new horse,new lion, new cats};
    for(int i=0;i<4;i++){
        arr[i]->getdetails();
    }
    return 0;
}