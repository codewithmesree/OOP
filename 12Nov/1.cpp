#include<iostream>
using namespace std;
#define maximum 100
#define pi 3.14
#define cube(x)(x*x*x)
#undef cube //undefining
int main(){
    cout<<"Maximum value is "<<maximum<<endl;
    cout<<"PI value is "<<pi<<endl;
    #ifndef cube    //if not defined , we define again
    #define square(y) (y*y)
    cout<<"Square of 8 is "<<square(8)<<endl;
    #endif
    return 0;
}