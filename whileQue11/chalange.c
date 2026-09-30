#include<stdio.h>
int main(){
    int n;

    printf("Enter the number between 10 to 99: ");
    scanf("%d", &n);
    int i = n;
    while(i < 100){
        if(i % 3 == 0){
            printf("%d\n", i);
            i++;
            continue;
        }
        if(i % 7 == 0){
            printf("loop is break your number is properly divided by 7");
            break;
        }
        i++;
    }
}