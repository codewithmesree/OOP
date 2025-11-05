#include<iostream>
#include<string.h>
using namespace std; 
#include"head.h"

bank_account :: bank_account(string name, int account_number){
    this->name=name;
    this->account_number=account_number;
}

void  bank_account :: get_details(){
    cout<<" Name: "<<this->name<<endl<<"Account Number : "<<this->account_number<<endl;
}

void bank_account :: deposit(int d){
    cout<<"Enter the amount you want to deposit:";
    cin>>d;
    cout<<"Amount deposited: "<<d<<endl;
}

void bank_account ::withdrawal(int w){
    cout<<"Enter amount to withdraw: ";
    cin>>w;
    cout<<"Amount withdrawn: "<<w<<endl;
}