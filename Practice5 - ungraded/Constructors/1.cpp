#include<iostream>
using namespace std;

class Library {
private:
    int ID;
    int price;

public:
    // Default constructor
    Library() {
        ID = 123;       // some default value
        price = 250;    // some default value
    }

    void display() {
        cout << "Book ID: " << ID << endl;
        cout << "Book Price: " << price << endl;
    }
};

int main() {
    Library l1;   // no arguments, default constructor is called
    l1.display();
    return 0;
}
