#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int roll_no;

public:
    student(int roll_no, string name)
    {
        this->name = name;
        this->roll_no = roll_no;
    }

    void get_student()
    {
        cout << "Name: " << name << endl
             << "Roll no: " << roll_no << endl;
    }
};

class math_course
{
    string course;
    int no_assign;

public:
    math_course(string course, int assignment)
    {
        this->course = course;
        this->no_assign = assignment;
    }
    void get_details()
    {
        cout << " Course: " << course << endl
             << " Assignment: " << no_assign << endl;
    }
};

class registry : public student, public math_course
{
    bool k;

public:
    registry(bool k, int assign, string course, string name, int roll_no) : math_course(course, assign), student(roll_no, name)
    {

        if (k == true)
        {
            cout << "Registered" << endl;
        }
        else
        {
            cout << "Not Registered" << endl;
        }
    }
};
int main()
{
    registry r1(false,5,"OOP","Sree",16);
    r1.get_student();
    r1.get_details();
    return 0;
};