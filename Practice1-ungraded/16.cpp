//Sum of digits
#include <iostream>
using namespace std;
int main() {
    int n,sum=0,remainder,n1;
    cout<<"Enter a number:";
    cin>>n;
    n1=n;
    while(n!=0){
        remainder = n%10;
        sum+=remainder;
        n=n/10;
    }
    cout<<"The sum of the digits of "<<n1<<" is "<<sum;
    return 0;
}