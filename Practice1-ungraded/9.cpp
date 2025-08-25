//Find the factorial of a given number n.
#include<iostream>
using namespace std;
int main(){
    int prod=1,n;
    cout<<"Enter a number:";
    cin>>n;
    for(int i=n;i>=1;i--){
        prod*=i;
    }
    cout<<"The factorial of the number is "<<prod;
}
