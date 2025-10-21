#include<iostream>
using namespace std; 

class Demo{
    public:
        Demo(){
            cout<<"This is a constructor"<<endl;
        }

        ~Demo(){
            cout<<"Constructor destroyed"<<endl;
        }
};

int main(){
    {
        Demo d1;
    }
    return 0;
}