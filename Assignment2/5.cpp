/*Create a program that demonstrates multiple inheritance. Example: A 
class SportsPerson inherits from both Person and Athlete. Explain what 
ambiguity arises and how you resolved it using scope resolution or 
virtual base classes.*/

#include<iostream>
using namespace std;

class Person{
    public:
        void display(){
            cout<<"This is the person class"<<endl;
        }
};

class Athlete : public Person{
    public:
        void display1(){
            cout<<"This is class Athlete"<<endl;
        }
};

class Sportsperson: public Person,public Athlete{
    public:
        void display2(){
            cout<<"This is class sportsperson"<<endl;
        }
};

int main(){
    // :: is used to avoid ambiguity
    Sportsperson s;
    //s.Person::display();
    s.Athlete::display1();
    s.Sportsperson::display2();

    return 0; 

}