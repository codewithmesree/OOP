/*Create a Circle class with:
• Private: radius
• Public: Constructor, area()
• Static function: setPi() to update value of π*/

#include<iostream>
using namespace std;

class Circle{
    private:
        int radius;
        static float pi;
    public:
        Circle(int radius){
            this->radius=radius;
        }

        int Area(){
            int area = pi*radius*radius;
        }

        static void setPi(double value) {
        pi = value;
        }
};

float Circle::pi = 3.14;

int main() {
    Circle c1(5);
    Circle c2(10);

    cout << "Default pi value: 3.14" << endl;
    cout << "Area of circle 1: " << c1.Area() << endl;
    cout << "Area of circle 2: " << c2.Area() << endl;

    // Update pi value using static function
    Circle::setPi(3.14159);
    cout << "\nAfter updating pi value:" << endl;
    cout << "Area of circle 1: " << c1.Area() << endl;
    cout << "Area of circle 2: " << c2.Area() << endl;

    return 0;
}