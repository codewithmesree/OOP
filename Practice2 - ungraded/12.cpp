//Use if-else with a loop: Print “Fizz” if a number is divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both (fornumbers 1 to 50).
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } 
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
        } 
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        } 
        else {
            cout << i << endl;
        }
    }
    return 0;
}
