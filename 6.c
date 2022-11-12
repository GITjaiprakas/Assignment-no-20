#include<stdio.h>
#include<string.h>
void cal(char *str,char *check);
int main(){
    char str[100]="count the no of vowels and consonants";
    char check[11]="aAeEiIoOuU";
    cal(str,check);
    return 0;
}
void cal(char *str,char *check){
    int cc,vc=0,i,j,s=0;
    for(i=0;*(str+i);i++){
        for(j=0;*(check+j);j++){
            if(*(str+i)==*(check+j))
                vc++;
        }
        if(*(str+i)==' ')
            s++;
    }
    cc=strlen(str);
    cc-=vc;
    printf("consonants %d\n",cc-s);
    printf("vowels %d",vc);
}
