//Read three integers and print the largest number.
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter 1st number:";
    cin>>num1;
    cout<<"Enter 2nd number:";
    cin>>num2;
    cout<<"Enter 3rd number:";
    cin>>num3;
    if((num1>num2)&&(num1>num3)){
        cout<<num1<<" is the largest number.";
    }
    else if((num2>num1)&&(num2>num3)){
        cout<<num2<<" is the largest number.";
    }
    else if((num1==num2)&&(num2==num3)){
        cout<<"All the numbers are the same.";
    }
    else {
        cout<<num3<<" is the largest number";
    }
}