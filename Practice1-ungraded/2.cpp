//Read an integer and check whether it is even or odd.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter an integer:";
    cin>>num;

    if(num%2==2){
        cout<<num<<", is even";
    }

    else{
        cout<<num<<", is odd";
    }

}