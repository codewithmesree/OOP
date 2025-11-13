#include<iostream>
using namespace std;
template <class T>
T Maximum(T x, T y ){
    return x>y? x:y;
}

int main(){
    float a = 5.5, b = 5.09, c;
    c = Maximum<float>(a,b);
    cout<<"Maximum float value is: "<<c<<endl;
    int x = 9 , y = 10, z;
    z = Maximum<int>(x,y);
    cout<<"Maximum int value is: "<<z<<endl;
    cout<<"Maximum value is: "<<Maximum<float>(5.5,5)<<endl;
    cout<<"Maximum value is: "<<Maximum<int>(5.5,5)<<endl;
    return 0;
}