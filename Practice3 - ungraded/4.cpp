/*Create a class Rectangle with private data members length and width.
Write setter and getter methods and calculate the area using them.*/

#include<iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;

    public:
    void set_value(int l, int b){
        l = length;
        b = breadth;
    }

    void get_value(int length, int breadth){
        cout<<"Area of Rectangle:"<<length*breadth<<endl;
    }
};

int main(){
    Rectangle r1;
    int len, br;
    cout<<"Enter length:";
    cin>>len;
    cout<<"Enter breadth:";
    cin>>br;
    r1.set_value(len,br);
    r1.get_value(len,br);
    return 0;
}