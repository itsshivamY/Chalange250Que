#include<stdio.h>
void main(){
    int a = -11;
    int *p = &a;
    *ptr=12;
    p=*ptr;
    printf("a=%d",*p);
}