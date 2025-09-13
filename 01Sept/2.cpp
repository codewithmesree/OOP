//Constructors
#include<iostream>
using namespace std; 
class xy_coordinate{
    private:
        float x;
        float y; 
    public:
        void set_value(float a1, float a2){
             //can be written outside the class also
            this->x=a1;
            this->y=a2; 
        }
        void get_value(void);

        //default constructor
        xy_coordinate(){
            cout<<"Hello World!"<<endl;
            this->x=62;
            this->y=70;
        }
        xy_coordinate(float n3){
            this->x=n3;
            this->y=0;
        }
};
/*Syntax to write outside the class: 
void xy_coordinate :: set_value(float a1,float a2){
    this->x=a1;
    this->y=a2;
}*/

/*void xy_coordinate :: get_value(void){
    cout<<"x-coordinate:"<<this->x<<endl<<"y-coordinate:"<<this->y<<endl;
}*/

int main(){
    xy_coordinate s1,s2;
    //s1.set_value(1,2);
    //s1.get_value();
    xy_coordinate s1(3.4),xy_coordinate s2(4.5,8.9);
    s1.get_value();
    return 0;
}

/*Constructor - special kind of method, name of the method must be the 
name of the class only */