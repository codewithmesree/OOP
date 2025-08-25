//Write a program to read your name and age, and print them in the format:
//Hello <name>, you are <age> years old.

#include<iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout<<"Enter you name:";
    cin>>name;
    cout<<"Enter your age:";
    cin>>age;
    cout<<"Hello "<<name<<", you are "<<age<<" years old.";
}