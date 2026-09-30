#include<stdio.h>
int main(){
    int i = 1;
    do{
        if(i%2 != 0){
            printf(" Odd number %d\n",i);
        }
        i++;
    }while(i<=20);
}