#include<stdio.h>
void main(){
    int a[]={3,4,6,8,65};
    int *p;
    p=&a[2];
    printf("%d\n",*p++,*++p);
    printf("%d\n",*p);
}