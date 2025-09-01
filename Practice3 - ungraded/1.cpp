/*Create a class Student with private data members name and age. Write
setter and getter methods to assign and retrieve their values. Demonstrate 
their use in main().*/

#include<iostream>
using namespace std; 

class Student{
    private:
    string name;
    int age;

    public:
    //setting the name and age
    void set_value(string n, int a){
        name=n;
        age =a;
    }

    //getting the name and age
    void get_value(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};

int main(){
    Student s1;
    s1.set_value("Alice",20);
    s1.get_value();
    return 0;
}