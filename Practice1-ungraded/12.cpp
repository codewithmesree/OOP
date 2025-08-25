//Find the roots of a quadratic equation ax2 + bx + c = 0. (Handle real and imaginary roots using if-else.)
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Enter coefficients a,b,c";
    cin>>a>>b>>c;
    float d = ((b*b)-(4*a*c));
    if(d>0){
        float r1 = (-b+sqrt(d)/(2*a)); 
        float r2 = (b+sqrt(d)/(2*a));
        cout<<"The real roots are "<<r1<<" and "<<r2;
    }
    
    else if(d==0){
        float r = -b/(2*a);
        cout<<"Equal roots : "<<r;
    }

    else{
        float d = -d;
        cout<<"The roots are imaginary. Real part: "<<-b/(2*a)<<" +- "<<(sqrt(d)/2*a)<<"i"<<endl;
    }
    return 0;
}

