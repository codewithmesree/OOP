#include<iostream>
using namespace std;
class details{  //instead of struct we use class
    private:
    string name;
    int roll_no;
    float m1,m2,m3,m4,m5;

    public:
        void set_value(int rn, float m1,float m2,float m3,float m4,float m5, string nm, string sub){
            roll_no=rn;
            m1=m1;
            m2=m2;
            m3=m3;
            m4=m4;
            m5=m5;
            name=nm;
        }
        void get_value(void){
            cout<<"Name: "<<name<<endl<<"Marks: "<<m1<<" "<<m2<<""<<m3<<""<<m4<<""<<m5<<""<<endl<<"Roll no: "<<roll_no<<endl;
        }
};

int main(){
    details d1;
    d1.set_value(34,78.9,81.0,71.0,90.0,78.0,"Sree","ITP");
    return 0;
}

//error came that things are inaccessible as private fns cannot be accessed 
// private things can only be accessed by a public method