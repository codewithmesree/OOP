//Write a program to find the largest digit in a number using a do-while loop.
#include <iostream>
using namespace std;

int main() {
    int n, digit, largest = 0;
    cout << "Enter a number: ";
    cin >> n;

    do {
        digit = n % 10;           // extract last digit
        if (digit > largest) {
            largest = digit;      // update largest if needed
        }
        n /= 10;                  // remove last digit
    } while (n > 0);

    cout << "The largest digit is: " << largest << endl;

    return 0;
}
