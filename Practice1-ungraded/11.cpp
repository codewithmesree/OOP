//Given marks of a student (0–100), print the grade: A (≥90), B (80–89),
//C (70–79), D (60–69), F (below 60).

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter marks (0-100):";
    cin>>m;
    if(m>=90){
        cout<<"The grade is A.";
    }
    else if(m>=80){
        cout<<"The grade is B.";
    }
    else if(m>=70){
        cout<<"The grade is C.";
    }
    else if(m>=60){
        cout<<"The grade is D.";
    }
    else{
        cout<<"The grade is F.";
    }
}
