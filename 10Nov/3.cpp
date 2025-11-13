#include<iostream>
using namespace std; 

template<class T, int size>
    T arrmaximum(T x[size]){
        T y = x[0];
        for(int i=1;i<size;i++){
            if(x[i]>y){
                y = x[i];
            }
        }

        return y;
    }

int main(){
    float arr[7]= {4.33,5,4,3.5,6.3,5.35,54.32};
    float c = arrmaximum<float,7>(arr);
    cout<<"Maximum element is: "<<c<<endl;
    return 0;
}