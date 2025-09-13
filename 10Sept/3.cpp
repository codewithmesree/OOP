#include<iostream>
using namespace std; 
class polynomial {
    private:
        int *arr = new int[3];
    public:
    polynomial(int a , int b , int c){
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        cout<<"New polynomial has been created "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
    }

    polynomial operator+(const polynomial& second_obj){
        polynomial p4(0,0,0);
        p4.arr[0] = this->arr[0]+second_obj.arr[0];
        p4.arr[1] = this->arr[1]+second_obj.arr[1];
        p4.arr[2] = this->arr[2]+second_obj.arr[2];
        return p4;
    }

    void get_details(void){
        cout<<"Polynomial value is "<<this->arr[0]<<"x^2 + "<<this->arr[1]<<"x + "<<this->arr[2]<<endl;
    }
};

int main(){
    polynomial p1(1,2,4), p2(3,4,5), p3(0,0,0);
    p3 = p1+p2;
    p3.get_details();
    return 0;
}