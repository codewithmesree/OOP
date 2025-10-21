/*Write a program to demonstrate single inheritance. Create a base class 
Shape and a derived class Rectangle. Include methods to calculate area 
and perimeter.Explain why inheritance is preferred over writing separate 
classes for each shape.*/

#include<iostream>
using namespace std; 

//base class
class Shape{
    public:
        int length;
        int breadth;
    void setParameter(int l, int b){
        length = l;
        breadth = b;
    }
};

//derived class
class Rectangle : public Shape{
    public:
        int area(){
            return length*breadth;
        }

        int perimeter(){
            return (2*(length+breadth));
        }
};

int main(){
    Rectangle rect;
    rect.setParameter(10,4);

    cout<<"The area of the rectangle is "<<rect.area()<<endl;
    cout<<"The perimeter of the rectangle is "<<rect.perimeter()<<endl;
    return 0;
}