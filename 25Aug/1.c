#include<stdio.h>
struct details{
    char str[10];
    int rollno;
    float marks;
};
void update_marks(struct details *x){
    float i;
    printf("Enter new marks:");
    scanf("%.2f",&i);
    x->marks = i;   //updating marks 
}
int main(){
    struct details s1 = {"Sree",89,90.0};
    printf("name: %s  roll no: %d marks: %.2f",s1.str,s1.rollno,s1.marks);
    //Update marks 
    //update_marks(&s1); - calling this fn won't update
    s1.marks=100.0;
    printf("Updated marks: \n name: %s  roll no: %d marks: %.2f",s1.str,s1.rollno,s1.marks);
    return 0;
}

//it's extremely easy for anyone to access and update details without any safety 