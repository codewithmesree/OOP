//Take two integers as input and print the larger one using if-else.
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter a number:";
    cin>>num1;
    cout<<"Enter another number:";
    cin>>num2;
    if(num1>num2){
        cout<<num1<<" is greater than"<<num2;
    }
    else{
        cout<<num2<<" is greater than "<<num1;
    }
}