//Take an integer and check whether it is positive, negative, or zero.
#include<iostream>
using namespace std;
int main(){
    int num1;
    cout<<"Enter an integer:";
    cin>>num1;
    if(num1==0){
        cout<<num1<<" is zero.";
    }
    else if(num1>0){
        cout<<num1<<" is positive.";
    }
    else{
        cout<<num1<<" is negative.";
    }
}
