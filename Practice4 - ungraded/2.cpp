/* Write a program to create a class Student with data members name,
age, and marks. Implement both a default constructor and a parameterized 
constructor to initialize the data.*/

#include<iostream>
using namespace std; 

class Student{
    private:
        string name;
        int age; 
        float marks; 
    //constructor 
    public:
        Student(){
            name="unknown";
            age=0;
            marks=0.0;
        }

        //parameterized constructor 
        Student(string n, int a,float m){
            name=n;
            age =a;
            marks=m;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){
    //display using default constructor
    Student s1; 
    cout<<"Student 1 details:"<<endl;
    s1.display();

    //display using parameterized constructor
    Student s2("Sree",19,91.0);
    cout<<"Student 2 details:"<<endl;
    s2.display();

    return 0;
}