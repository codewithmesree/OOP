/*Implement a program demonstrating multilevel inheritance. 
For example: Person → Employee → Manager. Show how data and functions 
are passed through the inheritance chain. Explain why access specifiers 
matter here.*/

#include<iostream>
using namespace std; 

class Person{
    public:
        void base(){
            cout<<"This is the base"<<endl;
        }
};

class Employee : public Person{
    public:
        void inherited1(){
            cout<<"This is the derived class ";
        }
};

class Manager : public Employee{
    public:
        void multilevel(){
            cout<<"This is multilevel inheritance ";
        }
};

int main(){
    Manager m1; 
    m1.base();
    m1.inherited1();
    m1.multilevel();
}