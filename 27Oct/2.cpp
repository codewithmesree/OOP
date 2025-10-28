//include stack data structure -push 5 elements in that
#include<iostream>
#include<stack>
using namespace std; 

int main(){
    stack<int> s1;
    int a; 
    for(int i = 0;i<5;i++){
        cout<<"Enter a number:";
        cin>>a;
        s1.push(a);
    }
    cout<<"The elements of the stack are:"<<endl;
    cout << "Head element: " << s1.top() << endl;
    s1.pop();
    while (s1.top() != 0)
    {
        cout << s1.top() << endl;
        s1.top() = s1.top()-1;
    }

}