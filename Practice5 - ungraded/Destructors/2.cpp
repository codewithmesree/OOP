/*Implement dynamic memory allocation in a constructor and deallocate
it using a destructor.*/

#include<iostream>
using namespace std;

class Demo{
    private:
        int *arr;
        int size;
    public: 
        //constructor 
        Demo(int s){
            size=s;
            arr = new int[size];
            cout<<"Constructor allocated memory for "<<size<<" integers"<<endl;
        }

        ~Demo(){
            delete[] arr;
            cout<<"Memory deallocated by destructor"<<endl;
        }

        
};