#include<iostream>
#include<string>
using namespace std;

class university{
    //string name;
    //int id;
    public:
        virtual void display(){
            //cout<<"Name:"<<this->name<<" and ID "<<this->id<<endl;
            cout<<"Welcome from class university"<<endl;
        }
};

class student:public university{
    public:
        void display1(){
            cout<<"Welcome from class student"<<endl;
        }
};

int main(){
    university *o1;
    university ob;
    o1 = &ob;
    o1->display();
    student* s1;
    student sb1;
    s1=&sb1;
    s1->display();
    //s1 = (student*)o1;
    o1 = s1;   //upcasting , dynamic binding
    o1->display();
    ob.display(); //static binding
    sb1.display(); //static binding
    return 0;
}