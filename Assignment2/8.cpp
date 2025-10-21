/*Create a program to demonstrate function overloading and overriding. 
Show how compile-time and run-time polymorphism differ. Explain when 
each is useful in real-world applications.*/

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Function to display area — will be overridden
    virtual void area() {
        cout << "Area of generic shape cannot be determined." << endl;
    }

    // Function overloading (compile-time polymorphism)
    void area(int length, int breadth) {  // Rectangle
        cout << "Area of rectangle: " << length * breadth << endl;
    }

    void area(int radius) {  // Circle
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

// Derived class
class Rectangle : public Shape {
private:
    int length, breadth;
public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function overriding (run-time polymorphism)
    void area() override {
        cout << "Area of rectangle (overridden): " << length * breadth << endl;
    }
};

int main() {
    Shape s;

    cout << "--- Compile-time Polymorphism (Function Overloading) ---" << endl;
    s.area(5, 10);  // Rectangle
    s.area(7);      // Circle

    cout << "\n--- Run-time Polymorphism (Function Overriding) ---" << endl;
    Rectangle r(5, 10);
    Shape* shapePtr = &r;   
    shapePtr->area();       

    return 0;
}
