/*Create a Rectangle class with:
• Private: length, breadth
• Public: Constructor, area()
• Friend function: compareArea() to compare areas of two rectangles*/

#include<iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length,int breadth){
            this->length=length;
            this->breadth=breadth;
        }

        int Area(){
            return length*breadth;
        }

        friend void compareArea(Rectangle &r,Rectangle &r1);
};

void compareArea(Rectangle &r, Rectangle &r1){
    cout<<"The area of the first rectangle is: "<<r.Area()<<endl;
    cout<<"The area of the second rectangle is: "<<r1.Area()<<endl;
}

int main(){
    Rectangle r1(2,2), r2(4,5);
    compareArea(r1,r2);
    return 0;
}