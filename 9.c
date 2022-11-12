#include<stdio.h>
void reverse(int *,int);
void swap(int *,int,int);
int main(){
    int a[5]={10,49,40,07,13},i;
    reverse(a,5);
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void reverse(int *b,int x){
    int i,j;
    j=x/2;
    x--;
    for(i=0;i<j;i++){
        swap(b,i,x);
        x--;
    }
}
void swap(int *c,int i,int x){
    int temp;
    temp=*(c+i);
    *(c+i)=*(c+x);
    *(c+x)=temp;
}
