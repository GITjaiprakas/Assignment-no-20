#include<stdio.h>
#include<string.h>
char swap(char *,char *,char *);
int main(){
    char first[20]="MySirg",second[20]="MyStudent",temp[20];
    printf("Before swapping\n");
    printf("first string is %s\n",first);
    printf("second string is %s\n",second);
    swap(first,second,temp);
    printf("After swapping\n");
    printf("first string is %s\n",first);
    printf("second string is %s",second);
    return 0;
}
char swap(char *first,char *second,char *temp){
    int i;
    for(i=0;*(first+i);i++)
        strcpy((temp+i),(first+i));
    for(i=0;*(second+i);i++)
        strcpy((first+i),(second+i));
    for(i=0;temp[i];i++)
        strcpy((second+i),(temp+i));
}
