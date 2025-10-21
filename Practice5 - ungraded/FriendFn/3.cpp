/*Create a class Rectangle with private length and width and use a friend
function to calculate the area.*/

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

    friend void Area(Rectangle r);  //declaring frnd fn
};

void Area(Rectangle r){
    cout<<"The area of the rectangle is: "<<r.length*r.breadth<<endl;
}

int main(){
    Rectangle r1(43,4);
    Area(r1);
    return 0;
}