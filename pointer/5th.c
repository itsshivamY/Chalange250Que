#include<stdio.h>
void main(){
    int a[]={2,5,7,9,8};
    int *p=a;
    int *q=&a[3];
    printf("q-p = %d\n",q-p);
    printf("p-q = %d\n",p-q);
    printf("value = %d\n",*q);
    q=q-2;
    printf("value =%d\n",*q);
    p=p+3;
    printf("q-p=%d\n",q-p);
}