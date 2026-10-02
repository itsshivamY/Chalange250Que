#include<stdio.h>
void main(){
    int a=10,b=9,d;
    int *p,*q;
    p=&a;
    q=&b;
    d=*p;
    printf("value of a= %d \n",a);
    printf("value of a= %d \n",*p);
    printf("address of a: %x\n",p);
    printf("address of a: %x\n",p);
    printf("address of p: %x\n",&p);
    printf("c=%d\n",d);
}