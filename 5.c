#include<stdio.h>
int find(int *,int *);
int main(){
    int a,b,max;
    printf("Enter any two numbers : ");
    scanf("%d %d",&a,&b);
    max=find(&a,&b);
    printf("the maximum number between %d and %d is %d",a,b,max);
    return 0;
}
int find(int *n1,int *n2){
    int max;
    *n1<*n2?(max=*n2):(max=*n1);
    return max;
}
