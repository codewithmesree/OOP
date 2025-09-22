//Inheritance
/*in prev code, we have to declare things twice though there were common
parameters between classes. Here we will see how to inherit things. 
THe details of University (base class) is gonna be put into 
students(derived class) */ 

#include<iostream>
using namespace std; 
class university{   //base class
    private:
        int ID; 
        string name;
    
        public:
            university(int ID, string name){
                this->ID=ID;
                this->name=name;
            }

            void get_details(){
                cout<<"Name:"<<name<<endl<<"ID:"<<ID<<endl;
            }
};

//Syntax:  nameoftheclass : access_type nameofbaseclass
class student :public university{  //derived class
    private:
        //int ID;
        int course_code;
        //string name; 
        string school; 
    public:
        student(int ID, int course_code, string name, string school):university(ID,name){
            this->course_code = course_code;
            //this->ID = ID; 
            //this->name=name;
            this->school=school; 
        }

        void get_details2(){
            cout<<"Course Code: "<<course_code<<endl<<"School:"<<school<<endl;
        }
};

int main(){
    //university u1(123,"Manas");
    //u1.get_details();
    student s1(123,12,"Manas","SCDS");
    s1.get_details();
    s1.get_details2();
    return 0; 
}