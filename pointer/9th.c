#include<stdio.h>
void main(){
    char str[] = "Devesh kumar Shivam with coding";
    char *ptr;
    ptr=str;
    printf("%c\n",*ptr);
    printf("ptr address=%u\n",ptr);
    printf("%c\n",*(ptr++ + 1));
    printf("ptr address =%u\n",ptr);
    printf("%c\n",*((ptr-- +5)-1)+3);
    printf("ptr address = %u\n",ptr);
    printf("%c\n",*(++ptr +10)-22);
    printf("%c %c %c\n",*ptr,*++ptr,*--ptr);
}