/*Create a Car class with:
• Private: brand, price
• Public: Constructor, Destructor (display a message when object is
destroyed)*/

#include<iostream>
using namespace std;

class Car {
private:
    string brand;
    float price;

public:
    Car(string brand, float price) {
        this->brand = brand;
        this->price = price;
        cout << "Car object created for " << brand << " with price " << price << endl;
    }

    ~Car() {
        cout << "Car object for " << brand << " is destroyed." << endl;
    }
};

int main() {
    Car c1("Toyota", 1500000);
    Car c2("Honda", 1200000);

    return 0;
}
