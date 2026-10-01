#include<stdio.h>
int main(){
    int n;
    printf("Interesting Game! Guess the number (0, 1, -1):\n");
    do{
        printf("Enter your number: ");
        scanf("%d", &n);

        if(n == 1){
            printf("You entered 1. Try again!\n");
            continue;
        }
        if(n == -1){
            printf("You entered -1. Try again!\n");
            continue;
        }
        if(n == 0){
            printf("Game Over!\n");
            break;
        }
        printf("Invalid number! Enter 0, 1 or -1.\n");
    }while(1);
}