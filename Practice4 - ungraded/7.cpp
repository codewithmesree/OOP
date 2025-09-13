/*Create a class Distance with data members feet and inches. Implement 
constructors for:
• Default initialization.
• Initialization using feet only.
• Initialization using feet and inches.
Also, write a function to display the distance.*/

#include<iostream>
using namespace std; 

class Distance{
    private:
        int feet; 
        int inches;
    public:
    //default constructor 
        Distance(){
            feet = 5;
            inches = 5;
        }

        Distance(int feet){
            this->feet=feet;
            inches=0;
        }

        Distance(int feet, int inches){
            this->feet=feet;
            this->inches=inches;
        }

        void display(){
            cout<<"Here are the details"<<endl;
            cout<<this->feet<<" feet "<<this->inches<<" inches "<<endl;
        }
};

int main(){
    Distance d1;
    d1.display();
    Distance d2(6);
    d2.display();
    Distance d3(5,4);
    d3.display();
    return 0; 
}