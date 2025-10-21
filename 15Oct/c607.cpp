#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
namespace mylibrary{
int sqrt(int n){
    return n*n*n;
}}
using namespace mylibrary;
int main() {
    int a = -5;
    int b = sqrt(9);
    cout<<"the value of b is "<<b<<endl;
    
}