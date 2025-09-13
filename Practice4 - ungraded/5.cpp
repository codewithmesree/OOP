/*Write a C++ program with a class Time having data members hours,
minutes, seconds. Overload constructors to:
• Initialize all with zero.
• Initialize hours and minutes, seconds defaulted to zero.
• Initialize all three.*/

#include<iostream>
using namespace std; 

class Time{
    private:
        int hr;
        int min;
        int sec;
    
    public:
        Time(){
            hr=0;
            min=0;
            sec=0;
        }

        Time(int hour,int min){
            this->hr=hour;
            this->min=min;
            this->sec=0;
        }

        Time(int hr,int min, int sec){
            this->hr=hr;
            this->min=min;
            this->sec=sec;
        }

        void display(){
            cout<<"The time is "<<this->hr<<":"<<this->min<<":"<<this->sec<<endl;
        }
};

int main(){
    Time t1; 
    t1.display();
    Time t2(12,30);
    t2.display();
    Time t3(12,30,45);
    t3.display();
    return 0; 
}