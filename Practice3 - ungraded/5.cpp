/*Define a class Employee with private members id and salary. Use
setters and getters to initialize and display their values. In main(),
create multiple employees and print their details.*/

#include<iostream>
using namespace std;

class Employee{
    private:
    int id,salary;

    public:
    void set_value(int ID, int sal){
        ID=id;
        sal=salary;
    }

    void get_value(int id, int salary){
        cout<<"Employee ID:"<<id<<endl<<"Salary:"<<salary<<endl;
    }
};

int main(){
    Employee e1;
    int id,sal;
    cout<<"Enter ID:";
    cin>>id;
    cout<<"Enter salary:";
    cin>>sal;
    e1.set_value(id,sal);
    e1.get_value(id,sal);
    return 0;
}