#include<stdio.h>
#include<string.h>
void reverse(char *);
void swap(char *,int,int);
int main(){
    char str[30]="Reverse";
    reverse(str);
    printf("%s",str);
    return 0;
}
void reverse(char *str){
    int x,i,j;
    x=strlen(str);
    x--;
    j=x/2;
    for(i=0;i<j;i++){
        swap(str,i,x);
        x--;
    }
}
void swap(char *str,int i,int x){
    int temp;
    temp=*(str+i);
    *(str+i)=*(str+x);
    *(str+x)=temp;
}
