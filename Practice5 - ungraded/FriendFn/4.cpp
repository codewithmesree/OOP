/*Write a program where a friend function swaps private variables of
two classes.*/

#include <iostream>
using namespace std;

class B; // forward declaration

class A
{
private:
    int a;

public:
    A(int val)
    {
        a = val;
    }

    void display()
    {
        cout << "A.a = " << a << endl;
    }

    friend void swapValues(A &objA, B &objB); // friend function
};

class B
{
private:
    int b;

public:
    B(int val)
    {
        b = val;
    }

    void display()
    {
        cout << "B.b = " << b << endl;
    }

    friend void swapValues(A &objA, B &objB); // friend function
};

void swapValues(A &objA, B &objB) {
    int temp = objA.a;
    objA.a = objB.b;
    objB.b = temp;
}

int main()
{
     A objA(10);
    B objB(20);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    swapValues(objA, objB);

    cout << "\nAfter swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}