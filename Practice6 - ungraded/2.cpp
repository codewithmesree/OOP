/*Create a Student class with:
• Private: name, rollNumber, marks
• Public: Constructor overloading:
– Default constructor
– Constructor with name and rollNumber
– Constructor with name, rollNumber, and marks*/

#include<iostream>
using namespace std; 

class Student{
    private:
        string name;
        int rollNumber;
        int marks;
    
        public:
            Student(){  //default constructor
                name = "Sree";
                rollNumber = 1;
                marks = 100;
            }

            Student(string name,int rollNumber){
                this->name=name;
                this->rollNumber=rollNumber;
                this->marks=0;
            }

            Student(string name,int rollNumber,int marks){
                this->name=name;
                this->rollNumber=rollNumber;
                this->marks=marks;
            }

            void display(){
                cout<<"Student Name: "<<name<<endl<<"Roll No: "<<rollNumber<<endl<<"Marks: "<<marks<<endl;
            }

};

int main(){
    Student s1;
    s1.display();
    Student s2("Manas",12,90);
    s2.display();
    Student s3("Anne",2);
    s3.display();
}