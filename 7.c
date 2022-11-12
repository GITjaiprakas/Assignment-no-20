#include<stdio.h>
int len(char *);
int main(){
    char str[200]="Vamana";
    printf("%d",len(str));
    return 0;
}
int len(char *cal){
    int i;
    for(i=0;*(cal+i);i++){
        i++;
    }
    return i;
}
