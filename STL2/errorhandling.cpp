#include<iostream>
using namespace std;
int main(){
    int a = 16;
    int b = 5;

    try{
        if(b==0){
            throw "Divisible by zero is not allowed";
        }
        if(b==4){
            throw 7;
        }
        if(b==5){
            throw string("Error occured");
        }
        cout<<"Answer is "<<a/b<<endl;
    }

    catch(const char* err){
        cout<<" Error: "<<err<<endl;
    }

    catch(int n){
        cout<<"Error: thrown element is "<<n<<endl;
    }
    catch(string &a){
        cout<<a<<endl;
    }

    return 0;
}