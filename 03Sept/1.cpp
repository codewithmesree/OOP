//Scribe - write about copy constructor in scribe for notes - HW 

#include<iostream>
#include<string>
using namespace std; 
class state_bank{
    private:
        string name;
        int account_no;
        float balance;
    
    public:
    static float total_balance; //declaration of static variable 
        state_bank(string n, int a, float b){
            this->name = n;
            this->account_no = a;
            this->balance = b;
            this->total_balance += b;
        }
    
    void get_details(void) {
        cout << "Name: " << this->name << endl;
        cout << "Account No: " << this->account_no << endl;
        cout << "Balance: " << this->balance << endl;
        cout << "Total Balance: " << this->total_balance << endl;
    }
};

float state_bank::total_balance = 0;

int main(){
    state_bank a1("Aashif",56789,3000.00);
    a1.get_details();
    state_bank a2("Bala",34567,6000.00);
    a2.get_details();
    return 0;
}