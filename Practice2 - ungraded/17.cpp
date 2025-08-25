// GCD using while loop 
#include <iostream>
using namespace std;
int main()
{
    int n1, n2,gcd;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    //Euclidean algorithm 
    while(n2!=0){
        int temp=n2;
        n2 = n1%n2;
        n1=temp;
    }
    cout<<"The GCD is "<<n1;
    return 0;
}