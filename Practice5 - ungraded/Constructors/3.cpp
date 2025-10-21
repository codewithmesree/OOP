/*Demonstrate constructor overloading with three constructors:
• One without parameters
• One with one parameter
• One with two parameters */

#include<iostream>
using namespace std;

class Library {
private:
    int ID;
    int price;

public:
    // 1. Default constructor (no parameters)
    Library() {
        ID = 0;
        price = 0;
    }

    // 2. Constructor with one parameter
    Library(int id) {
        ID = id;
        price = 100;   // default price
    }

    // 3. Constructor with two parameters
    Library(int id, int pr) {
        ID = id;
        price = pr;
    }

    void display() {
        cout << "Book ID: " << ID << endl;
        cout << "Book Price: " << price << endl << endl;
    }
};

int main() {
    Library l1;            // calls default constructor
    Library l2(101);       // calls 1-parameter constructor
    Library l3(202, 350);  // calls 2-parameter constructor

    cout << "Object 1:" << endl;
    l1.display();

    cout << "Object 2:" << endl;
    l2.display();

    cout << "Object 3:" << endl;
    l3.display();

    return 0;
}