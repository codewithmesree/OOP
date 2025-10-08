#include<iostream>
using namespace std;

int main(){
    int i = 2;
    double j = 3.5;
    int *iptr = &i;
    double *dptr = &j;

    //iptr = dptr; //implicit doesn't work with pointers
    iptr = (int*)dptr; //double to integer
    dptr = (double*)iptr; //explicit casting integer to double
    cout<<*iptr<<endl;
    cout<<*dptr; 

    return 0;
}