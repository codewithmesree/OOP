/*Write a class that counts the number of objects created using a static
variable inside a constructor.*/

#include<iostream>
using namespace std;

class Counter{
    private:
        static int count;
    public:
        Counter(){
            count++;
        }

        void display(){
            cout<<"The number of objects is: "<<count<<endl;
        }
};

//defining static variable outside the class
int Counter::count = 0; 

int main(){
    Counter c1;
    Counter c2;
    c2.display();
    return 0;
}