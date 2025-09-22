#include<iostream>
#include<string>
using namespace std; 
#include"head.h"

books :: books(string name, int id){
    this->name=name;
    this->id=id;
}

void  books :: get_details(){
    cout<<" Name: "<<this->name<<endl<<"ID : "<<this->id<<endl;
}