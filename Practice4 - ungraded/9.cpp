/*Write a program to create a class Employee with data members name,
id, and salary. Implement:
• A constructor that initializes name and id only.
• A constructor that initializes all three values.*/

#include<iostream>
using namespace std; 

class Employee{
    private:
        string name;
        int id;
        int salary;
    public:
    //default constructor
        Employee(){
            name="unknown";
            id=0;
            salary=0;
        }

        Employee(string name, int id){
            this->name=name;
            this->id=id;
            salary=0;
        }

        Employee(string name, int id, int salary){
            this->name=name;
            this->id=id;
            this->salary=salary;
        }

        void display(){
            cout<<"Name:"<<this->name<<endl<<"ID:"<<this->id<<endl<<"Salary:"<<this->salary<<endl;
        }
};

int main(){
    Employee e1("Conan Grey",100612);
    e1.display();
    Employee e2("Alec Benjamin",100613,50000);
    e2.display();
    return 0;

}