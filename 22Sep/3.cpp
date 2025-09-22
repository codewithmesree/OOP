#include<iostream> 
using namespace std; 
class anything{
    private:
        void greet(){
            cout<<"Hello from greet"<<endl;
        }
        public:
            void greet2(){
                greet();
                cout<<"Hello from greet2"<<endl;
            };
};

int main(){
    anything g1;
    g1.greet2();
    return 0; 
}

/* anything declared in private can only be accessed through
a public method as given in this*/