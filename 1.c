#include<stdio.h>
void swap(int *r1,int *r2){
      int t;
      t=*r1;
      *r1=*r2;
      *r2=t; 
}
int main(){
    int n1=3,n2=8;
    printf("Before swappig a =%d b =%d\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping a=%d b=%d",n1,n2);
    return 0;
}
