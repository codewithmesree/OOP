#include<iostream>
using namespace std ;

//inheritance 
//base class
class university{
    private:
        string name;
        int id;
    public: 
        university(string name, int id){
            this->name=name;
            this->id=id;
            cout<<"A new member has been created "<<name<< " and "<<id<<endl;
        }

        void get_details(){
            cout<<"Name: "<<name<<endl<<"ID :"<<id<<endl;
        }
};

//derived class syntax - name of derived class : access specifier for base class
class students : public university{
    private:
        string school;
    public: 
        students(string name, int id, string school):university(name,id){
            this->school = school;
        };
        void get_student_details(void){
            get_details();
            cout<<"School name: "<<this->school<<endl;
        }
};

int main(){
    //university m1("Anne",1), m2("Sree",2), m3("Manas",3);
    students s1("Bharath",123,"Law");
    s1.get_student_details();
    return 0;
}

//read about inheritances 