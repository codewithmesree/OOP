#include<iostream>
using namespace std;

int main(){
    int a = 5;
    double b = 6.6, c=5.5;
    cout<<"Value of b: "<<b<<endl;
    b=a;    //int to double implicit typecasting
    b = (double)a;  //explicit casting - doing purposefully
    cout<<"Value of b: "<<b<<endl;
    a=c;    //double to int - implicit casting
    //a = (int)c; //explicit casting
    cout<<"Value of a: "<<a<<endl;
    return 0;
}