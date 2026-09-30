#include<stdio.h>
int main(){
    int i=1;
    while(i<5){
        if(i==3){
            printf("condition is True so loop is break \n");
            break;
        }
        printf("%d\n",i);
        i++;
    }
}