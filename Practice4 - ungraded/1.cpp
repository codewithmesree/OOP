/*Define a class Rectangle with data members length and breadth.
Write a constructor to initialize both and a member function to calculate 
the area.*/

#include<iostream>
using namespace std; 

class Rectangle{
    private:
        int length;
        int  breadth;
    
    public:
        //constructor
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }
        //area
        int Area(){
            return length*breadth;
        }
};

int main(){
    int l,b;
    cout<<"Enter length:";
    cin>>l;
    cout<<"Enter breadth:";
    cin>>b;

    //Create object Rectangle
    Rectangle rect(l,b);
    cout<<"The area of the rectangle is"<<rect.Area()<<endl;

    return 0;
}