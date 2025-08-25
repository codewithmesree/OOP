//Ask user for name city and highest marks 
#include<iostream>
using namespace std;
class details{  //instead of struct we use class
    private:
    string name,city;
    int marks;
    public:
        void set_value(string nm,string ct, int mk){
            name = nm;
            city = ct;
            marks=mk;
        }
        void get_value(void){
            cout<<"Name: "<<name<<endl<<"City: "<<city<<endl<<"Marks: "<<marks<<endl;
        }
};

int main(){
    details d1;
    string name,city;
    int marks;
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your city:";
    cin>>city;
    cout<<"Enter marks:";
    cin>>marks;
    d1.set_value(name,city,marks);
    d1.get_value();
    return 0;
}