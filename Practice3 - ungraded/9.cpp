/*Write a class Temperature with a private member celsius. Provide
setCelsius() and getFahrenheit() methods to convert the stored
temperature to Fahrenheit.*/

#include<iostream>
using namespace std;

class Temperature{
    private:
    int celsius;

    public:
    void setCelsius(int cel){
        cel=celsius;
    }

    void getFahrenheit(int celsius){
        int fah = ((celsius*1.8)+32);
        cout<<"Fahrenheit:"<<fah<<endl;
    }
};

int main(){
    Temperature t1;
    int cel;
    cout<<"Enter temperature in celsius:";
    cin>>cel;
    t1.setCelsius(cel);
    t1.getFahrenheit(cel);
    return 0;
}