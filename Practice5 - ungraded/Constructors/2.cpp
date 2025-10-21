/*Create a class Student with parameterized constructors to initialize
different sets of variables.*/

#include<iostream>
using namespace std; 

class Student{
    private:
        int ID;
        int rollno;
    public:
        Student(int ID, int rollno){
            this->ID=ID ; 
            this->rollno=rollno;
        }

        Student(int ID){
            this->ID = ID;
            this->rollno = 0; 
        }

        void display(){
            cout<<"Student ID: "<<this->ID<<endl<<"Roll No: "<<this->rollno<<endl;
        }

};

int main(){
    Student S1(123456,12);
    S1.display();
    Student S2(123457);
    S2.display();
    return 0;
}