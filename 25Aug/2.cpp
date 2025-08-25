#include<iostream>
using namespace std;
class details{  //instead of struct we use class
    public:
    string name;
    int roll_no;
    float marks;
};

int main(){
    details d1;
    d1.name="Sree";
    d1.marks=90.8;
    d1.roll_no=70;
    cout<<"Name: "<<d1.name<<endl<<"Marks: "<<d1.marks<<endl<<"Roll no: "<<d1.roll_no<<endl;
    return 0;
}