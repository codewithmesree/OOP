/* have fn1 and fn2 where fn1 compares two integers and fn2 with float
return the maximum value*/

#include<iostream>
using namespace std; 

int fn1(int a, int b){
    return a>b ?a : b;  //ternary operator
}

float fn2(float a, float b){
    return a>b ?a : b;  //ternary operator
}

int main(){
    int a = 5, b = 8;
    cout<<"Maximum integer value: "<<fn1(a,b)<<endl;
    float c = 5.6, d = 3.5;
    cout<<"Maximum float value: "<<fn2(c,d)<<endl;
    return 0;
}