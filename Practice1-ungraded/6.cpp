//Write a program to print the multiplication table of a given number using a for loop.
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter an integer:";
    cin>>num1;
    for(int i=1;i<=num1;i++){
        cout<<num1<<" x "<<i<<" = "<<num1*i<<endl;
    }
}
