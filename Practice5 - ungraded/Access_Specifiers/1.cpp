/*Write a program to demonstrate private data members with getter
and setter functions.*/

#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;      // private data member
    string name;     // private data member

public:
    // Setter for rollNo
    void setRollNo(int r) {
        rollNo = r;
    }

    // Getter for rollNo
    int getRollNo() {
        return rollNo;
    }

    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter for name
    string getName() {
        return name;
    }
};

int main() {
    Student s1;

    // Using setter functions to set private data
    s1.setRollNo(101);
    s1.setName("Alice");

    // Using getter functions to access private data
    cout << "Student Roll No: " << s1.getRollNo() << endl;
    cout << "Student Name: " << s1.getName() << endl;

    return 0;
}
