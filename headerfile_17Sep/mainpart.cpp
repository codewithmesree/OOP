#include<iostream>
using namespace std; 
#include"head.h"
int main(){
    bank_account b1("Harry Potter",100034);
    b1.get_details();
    b1.deposit(100);
    b1.withdrawal(50);
    return 0;
}