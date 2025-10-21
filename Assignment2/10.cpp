/*Design a simple example that demonstrates abstract classes and pure 
virtual functions. Create a base class Shape with a pure virtual 
function area() and derive Circle and Square classes. Explain why 
abstract classes are useful in large-scale software design.*/

#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;

    void displayArea() {
        cout << "Area: " << area() << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        radius = r;
    }

    // Implement the pure virtual function
    double area() override {
        return 3.14 * radius * radius;
    }
};

// Derived class: Square
class Square : public Shape {
private:
    double side;
public:
    Square(double s) {
        side = s;
    }

    // Implement the pure virtual function
    double area() override {
        return side * side;
    }
};

int main() {
    // Cannot create object of abstract class
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Square(4.0);
    cout << "--- Using displayArea() method ---" << endl;
    shape1->displayArea();  // Calls Circle's area()
    shape2->displayArea();  // Calls Square's area()
    cout << "--- Direct area() call ---" << endl;
    cout << "Circle area: " << shape1->area() << endl;
    cout << "Square area: " << shape2->area() << endl;
    delete shape1;
    delete shape2;

    return 0;
}
