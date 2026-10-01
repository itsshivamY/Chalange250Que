#include<stdio.h>
int main(){
    int n;
    printf("Enter any number and you get Table that number: ");
    scanf("%d", &n);
    int i = 1;
    do{
        printf("%d x %d => %d\n", n, i, i*n);
        i++;
    }while(i <= 10);
}