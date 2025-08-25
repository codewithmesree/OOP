//Write a program to keep taking marks as input until the user enters −1, then print the average of the entered marks.
#include <iostream>
using namespace std;
int main() {
    int marks,sum=0,n=0;
    while(marks!=-1){
        cout<<"Enter marks:";
        cin>>marks;
        sum+=marks;
        n+=1;
    }
    int avg = sum/n;
    cout<<"The average of all the marks is "<<avg<<endl;
    return 0;
}