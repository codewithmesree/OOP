//Take a number as input and check if it is an Armstrong number using a while loop.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, original, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    // count digits
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    // calculate sum of powers of digits
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    // check Armstrong condition
    if (sum == original)
        cout << original << " is an Armstrong number." << endl;
    else
        cout << original << " is not an Armstrong number." << endl;

    return 0;
}
