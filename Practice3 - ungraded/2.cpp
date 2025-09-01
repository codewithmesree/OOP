/*Define a class BankAccount with a private member balance. Provide
methods setBalance() and getBalance() to update and view the
balance. Ensure that negative values cannot be assigned.*/

#include<iostream>
using namespace std;

class BankAccount{
    private:
    int balance;

    public:
    void setBalance(int bal){
        bal = balance;
    }

    void getBalance(int balance){
        cout<<"Account Balance:"<<balance;
    }
};

int main(){
    BankAccount b1; 
    int bal;
    cout<<"Enter account balance:";
    cin>>bal;
    if(bal>=0){
        b1.setBalance(bal);
        b1.getBalance(bal);
    }

    else{
        cout<<"Balance cannot be negative";
    }

    return 0;

}