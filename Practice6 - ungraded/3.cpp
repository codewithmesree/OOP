/*Employee Class with Static Count
Create an Employee class with:
• Private: id, salary
• Public: Constructor to initialize values
• Static variable: employeeCount (to track the number of employees)*/

#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        int salary;
    public:
        static int employeeCount;

        Employee(int id, int salary){
            this->id=id;
            this->salary = salary;
            employeeCount+=1;
        }

        void display(){
            cout<<"Employee ID: "<<id<<endl<<"Employee Salary: "<<salary<<endl;
        }

        static void showcount(){
            cout<<"Total number of employees is: "<<employeeCount<<endl;
        }
};

int Employee::employeeCount = 0;

int main(){
    Employee e1(1001,100000);
    e1.display();
    cout<<"----------------------------------------------"<<endl;
    Employee e2(1002,50000);
    e2.display();
    cout<<"----------------------------------------------"<<endl;
    Employee::showcount();
}