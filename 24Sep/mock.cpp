#include<iostream> 
#include<string.h> 
using namespace std;

class my_string{
    private:
        string str; 
    public: 
        my_string(string str){
            this->str = str;
        }

        void capitalize(string str){
            string str1 = "";
            for(int i=0;i<=str.length;i++){
                int a = (int)str[i] - 32;
                str1+=a;
            }
        }
};

int main(){
    char a = 'a'; 
    cout<<"The ASCII value is: "<<(int)a<<endl;
    return 0;
}