/*Define a class University with private members name and ranking.
Provide setters and getters. Demonstrate in main() that private data
members cannot be accessed directly, but only via the methods.*/

#include<iostream>
using namespace std;

class University{
    private:
    string name; int rank;

    public:
    void set_value(string n,int rank){
        n=name;
        rank=rank;
    }

    void get_value(string  name,int rank){
        cout<<"Student name:"<<name<<endl<<"Rank:"<<rank<<endl;
    }
};

int main(){
    University u1;
    string name;
    int rank;
    cout<<"Enter student name:";
    cin>>name;
    cout<<"Enter rank:";
    u1.set_value(name,rank);
    u1.get_value(name,rank);
    return 0;
}