//Adding a private inside a public function/method 
#include<iostream>
using namespace std;
class details{  //instead of struct we use class
    public:
    string name;
    int roll_no;
    private:
    float m1,m2,m3,m4,m5;

    public:
        void set_value(int roll_no,float mk1,float mk2,float mk3,float mk4,float mk5, string nm){
            m1=mk1;
            m2=mk2;
            m3=mk3;
            m4=mk4;
            m5=mk5;
            name=nm;
            roll_no=roll_no;
        }
        void get_value(void){
            cout<<"Name: "<<name<<endl<<"Marks: "<<m1<<" "<<m2<<""<<m3<<""<<m4<<""<<m5<<""<<endl<<"Roll no: "<<roll_no<<endl;
        }
};

int main(){
    details d1;
    d1.set_value(34,78.9,81.0,71.0,90.0,78.0,"Sree");
    d1.get_value();
    return 0;
}