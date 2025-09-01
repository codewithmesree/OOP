/*Create a class Account with private members accountNumber and
balance. Provide setter and getter methods. In main(), ensure that
account details can only be accessed through these methods.*/

#include<iostream>
using namespace std;

class Account{
    private:
    int accountNumber,balance;

    public:
    void set_value(int no,int bal){
        no=accountNumber;
        bal=balance;
    }

    void get_value(int accountNumber,int balance){
        cout<<"Account no:"<<accountNumber<<endl<<"Balance:"<<balance<<endl;
    }
};

int main(){
    Account a1;
    int no,bal;
    cout<<"Enter account number:";
    cin>>no;
    cout<<"Enter balance:";
    a1.set_value(no,bal);
    a1.get_value(no,bal);
    return 0;
}