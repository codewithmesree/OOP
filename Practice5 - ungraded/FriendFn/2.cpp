/*Implement a friend function that allows two classes to share a common
function to add private variables.*/

#include<iostream>
using namespace std; 

class B;    //forward declaration
class A{
    private:
        int a;
    public:
        A(int a){
            this->a=a;
        }

    friend void sum(A objA,B objB);
};

class B{
    private:
        int b;
    public:
        B(int b){
            this->b=b;
        }

    friend void sum(A objA,B objB);
};

void sum(A objA, B objB){
    cout<<"The sum of the numbers is: "<<(objA.a+objB.b)<<endl;
}

int main(){
    A objA(10);
    B objB(15);
    sum(objA,objB);
    return 0; 
}