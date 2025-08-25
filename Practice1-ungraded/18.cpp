//Reverse the digits of a given number. (Example: input 1234 → output 4321)
#include <iostream>
using namespace std;
int main() {
    int n,reversed=0,remainder,n1;
    cout<<"Enter a number:";
    cin>>n;
    n1=n;
    while(n!=0){
        remainder = n%10;
        reversed = reversed*10+remainder;
        n=n/10;
    }
    if(reversed==n1){
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;
}