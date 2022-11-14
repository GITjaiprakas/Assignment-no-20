#include<stdio.h>
int main(){
    int x=10,*p,**q,***r;
    p=&x;//assigning the address of x variable to a pointer p
    q=&p;//assigning the address of pointer to integer variable p variable to a pointer q
    r=&q;//assigning the address of pointer to pointer to pointer to integer variable q variable to a pointer r
    printf("%d %d %d %d",x,*p,**q,***r);
    printf("%d %d %d %d",&x,p,*q,**r);
    printf("%d %d %d %d",&p,q,*r);
    printf("%d",&r);
    return 0;
}
