#include<stdio.h>
int main(){
    int a=4,b=1,*p;
    p=&a;//assigning the address of a variable to a pointer p
    printf("%d",*p);
    return 0;
}
