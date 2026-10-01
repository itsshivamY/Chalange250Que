#include<stdio.h>
int main(){
    int i=1;
    while(1<100){
        if(i%7==0){
            printf("Loop is break because your number is divided by 7\n");
            break;
        }
        printf("%d\n",i);
        i++;
    }
}