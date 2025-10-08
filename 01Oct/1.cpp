//Multilevel Inheritance
#include<iostream>
using namespace std; 
class university{
    int id;
    string name;
    public:
        university(int id, string name){
            this->id=id;
            this->name=name;
        }

        void get_details(){
            cout<<"ID: "<<this->id<<endl<<"Name: "<<this->name<<endl;
        }
};

class students : public university{
    int roll_no;
    string school; 
    public:
        students(int roll_no,string school,string name, int id):university(id,name){
            this->roll_no=roll_no;
            this->school=school;
        }

        void get_student(){
            cout<<"Roll no: "<<roll_no<<endl<<"School: "<<school<<endl;
        }
};

class class_rep : public students{
    int task;
    string course;
    public:
        class_rep(int task, string course, int roll_no, string school, int id, string name)
        : students(roll_no, school, name, id) {
            this->task = task;
            this->course = course;
        }

        void get_cr(){
            cout<<"Task: "<<task<<endl<<"Course: "<<course<<endl;
        }
};

class SG : public class_rep {
    string pos;
    bool position;

public:
    SG(bool position, string pos, string course, int task, int roll_no, string school, int id, string name)
        : class_rep(task, course, roll_no, school, id, name) {
        this->pos = pos;
        this->position = position;
    }

    void get_sg() {
        cout << "Position: " << pos << endl
             << "Has Position: " << (position ? "Yes" : "No") << endl;
    }
};


int main(){
    SG sg1(true, "Sports Secretary", "LA", 1, 34, "SCDS", 1, "Anne");
    sg1.get_details();   
    sg1.get_student();   
    sg1.get_cr();        
    sg1.get_sg();        
    return 0;
}
