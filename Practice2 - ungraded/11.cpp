//Write a program to calculate the power of a number (a**b) using a while loop.
#include <iostream>
using namespace std;
int main() {
    int a,b,n=1,prod=1;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter the power:";
    cin>>b;
    while(n<=b){
        prod=prod*a;
        n+=1;
    }
    cout<<"The result is:"<<prod<<endl;
    return 0;
}