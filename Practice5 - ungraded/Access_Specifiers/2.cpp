/*Implement a class with a mix of public and private members and
show how functions access them correctly.*/

#include<iostream>
using namespace std;

class Employee {
private:
    int salary;        // private member
    string password;   // private member

public:
    string name;       // public member
    int age;           // public member

    // Setter for private members
    void setDetails(int s, string p) {
        salary = s;
        password = p;
    }

    // Getter for private members
    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
        cout << "Password (hidden in real apps): " << password << endl;
    }
};

int main() {
    Employee e1;

    // Accessing public members directly
    e1.name = "John";
    e1.age = 30;

    // Accessing private members using public functions
    e1.setDetails(50000, "secure123");

    // Display all details
    e1.showDetails();

    return 0;
}