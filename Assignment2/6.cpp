/*Write a program where two different class objects share data using a 
friend function. For example, a class Student and a class Sports share 
marks and scores. Explain why the friend function was needed instead of 
a member function.*/

#include <iostream>
using namespace std;

class Sports; // Forward declaration

class Student {
    int marks;
public:
    Student(int marks) {
        this->marks=marks;
    }

    // Declare friend function
    friend void displayResult(Student s, Sports sp);
};

class Sports {
    int score;
public:
    Sports(int score) {
        this->score = score;
    }

    friend void displayResult(Student s, Sports sp);
};

// Friend function can access private members of both classes
void displayResult(Student s, Sports sp) {
    cout << "Academic Marks: " << s.marks << endl;
    cout << "Sports Score: " << sp.score << endl;
    cout << "Total (Marks + Score): " << s.marks + sp.score << endl;
}

int main() {
    Student st(85);
    Sports sport(15);

    // Friend function accesses both private members
    displayResult(st, sport);

    return 0;
}
