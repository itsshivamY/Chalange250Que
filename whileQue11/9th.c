#include<stdio.h>
int main(){
    int i=11;
    while(i<100){
        if(i%15==10){
            printf("your loop is break because number divided by 15 than reminder is 10\n");
            break;
        }
        printf("%d \n",i);
        i++;
    }
}