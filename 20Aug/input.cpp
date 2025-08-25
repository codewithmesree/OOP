/* WAP using while loop to ask user input until the 
sum of the numbers become greater than 50*/

#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    while(sum!=50){
        cout<<"Enter a number:";
        cin>>n;
        sum+=n;
    }
    cout<<"The sum has exceeded 50";
}