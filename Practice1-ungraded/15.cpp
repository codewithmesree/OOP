//Reverse the digits of a given number. (Example: input 1234 → output 4321)
#include <iostream>
using namespace std;
int main() {
    int n,reversed=0,remainder;
    cout<<"Enter a number:";
    cin>>n;
    while(n!=0){
        remainder = n%10;
        reversed = reversed*10+remainder;
        n=n/10;
    }
    cout<<"The reverse is "<<reversed;
    return 0;
}