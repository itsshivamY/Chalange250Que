#include<stdio.h>

int main(){

    char name[50];
    int age;
    char course[50];
    char branch[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your course: ");
    scanf("%s", course);

    printf("Enter your branch: ");
    scanf("%s", branch);

    printf("\nYour name is: %s\n", name);
    printf("Your age is: %d\n", age);
    printf("Your course is: %s\n", course);
    printf("Your branch is: %s\n", branch);

    return 0;
}