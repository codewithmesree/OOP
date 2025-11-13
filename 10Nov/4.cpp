#include <iostream>
using namespace std;

template <class T>
void swapValues(T &x, T &y) {
    T temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 6;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapValues<int>(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    float a1 = 3.5, b1 = 5.6;
    cout << "\nBefore swapping: a1 = " << a1 << ", b1 = " << b1 << endl;
    swapValues<float>(a1, b1);
    cout << "After swapping: a1 = " << a1 << ", b1 = " << b1 << endl;

    string s1 = "Manas", s2 = "Anne";
    cout << "\nBefore swapping: s1 = " << s1 << ", s2 = " << s2 << endl;
    swapValues<string>(s1, s2);
    cout << "After swapping: s1 = " << s1 << ", s2 = " << s2 << endl;

    return 0;
}
