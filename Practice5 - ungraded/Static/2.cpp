/*Implement a static function that accesses a static member variable to
keep track of the number of function calls.*/

#include<iostream>
using namespace std;

class Counter {
private:
    static int count;   // static member variable

public:
    // static function to access static member
    static void increment() {
        count++;
        cout << "The number of function calls: " << count << endl;
    }
};

// definition of static variable (initialization)
int Counter::count = 0;

int main() {
    Counter::increment();  // 1st call
    Counter::increment();  // 2nd call
    Counter::increment();  // 3rd call
    return 0;
}
