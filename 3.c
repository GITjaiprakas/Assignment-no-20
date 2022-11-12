#include<stdio.h>
void sort(int *ptr,int size);
void swap(int *ptr,int j,int min);
int main(){
    int arr[100],size,i;
    printf("Enter the no of elements : ");
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    sort(arr,size);
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int *ptr,int size){
    int i,j,min;
    for(i=0;i<size-1;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if((*(ptr+j))<(*(ptr+min))){
                min=j;
            }
        }
        swap(ptr,i,min);
    }
}
void swap(int *ptr,int j,int min){
    int temp;
    temp=*(ptr+min);
    *(ptr+min)=*(ptr+j);
    *(ptr+j)=temp;
}
