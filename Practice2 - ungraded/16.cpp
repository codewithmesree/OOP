//Use a for loop to check if a number is a palindrome..
#include <iostream>
using namespace std;
int main() {
    int n,original,reversed=0;
    cout<<"Enter a number:";
    cin>>n;
    original = n;
    for(int temp=n;temp>0;temp/=10){
        int digit = temp%10;
        reversed = reversed*10 + digit;
    }
    // check palindrome
    if (original == reversed)
        cout << original << " is a palindrome." << endl;
    else
        cout << original << " is not a palindrome." << endl;
    return 0;
}