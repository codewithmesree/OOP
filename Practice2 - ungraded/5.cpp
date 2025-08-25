//Write a program to find the factorial of a number using a while loop.
#include <iostream>
using namespace std;
int main() {
    int n,fact=1;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        fact*=n;    //calculating factorial
        n-=1;
    }
    cout<<"The factorial is: "<<fact<<endl;
    return 0;
}