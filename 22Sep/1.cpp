//Inheritance
#include<iostream>
using namespace std; 
class university{
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

class student{
    private:
        int ID;
        int course_code;
        string name; 
        string school; 
    public:
        student(int ID, int course_code, string name, string school){
            this->course_code = course_code;
            this->ID = ID; 
            this->name=name;
            this->school=school; 
        }

        void get_details2(){
            cout<<"Name:"<<name<<endl<<"ID:"<<ID<<endl<<"Course Code: "<<course_code<<endl<<"School:"<<school<<endl;
        }
};

int main(){
    university u1(123,"Manas");
    u1.get_details();
    student s1(123,12,"Manas","SCDS");
    s1.get_details2();
    return 0; 
}