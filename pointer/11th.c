//Null pointer 

#include<stdio.h>
void main(){
    int a=3;
    int *ptr1=NULL;
    int *ptr2=NULL;
    if(ptr1==ptr2){
        printf("both are 0\n");
    }
    else{
        printf("%d\n",*ptr1);
    }
}