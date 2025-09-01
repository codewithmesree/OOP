/*Implement a class Circle with a private data member radius. Provide
setters and getters, and an additional method getArea() that uses the
getter to calculate the area.*/

#include<iostream>
using namespace std;

class Circle{
    private:
    int radius;

    public:
    void set_value(int rad){
        rad=radius;
    }

    void getArea(int radius){
        cout<<"Area of Circle:"<<3.14*radius*radius<<endl;
    }
};

int main(){
    Circle c1;
    int rad;
    cout<<"Enter radius:";
    cin>>rad;
    c1.set_value(rad);
    c1.getArea(rad);
    return 0;
}