#include<stdio.h>
int compute(int *,int);
int main(){
    int a[5]={20,40,10,1,90};
    printf("%d",compute(a,5));
    return 0;
}
int compute(int *a,int x){
    int i,sum=0;
    for(i=0;i<x;i++){
        sum=sum+*(a+i);
    }
    return sum;
}
