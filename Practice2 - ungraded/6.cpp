//Print the digits of a number in reverse order using a do-while loop.
#include <iostream>
using namespace std;
int main() {
    int n,reversed=0,remainder;
    cout<<"Enter a number:";
    cin>>n;
    do{
        remainder=n%10;
        reversed=reversed*10+remainder;
        n/=10;
    }while(n!=0);
    cout<<"The reverse is "<<reversed<<endl;
    return 0;
}