#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
namespace somename{
    int abs1(int n){
    return 99;
}}
using namespace somename;
int main() {
    int a = -5;
    int b = somename::abs1(a);
    cout<<"value of b is "<<b<<endl;
    
}