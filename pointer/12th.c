// //Danglin pointer in c

// #include<stdio.h>
// #include<stdlib.h>
// int* f(){
//     int a=9;
//     return &a;
// }
// void main(){
//     int *ptr=f();
//     printf("%d\n",*ptr);

//     /*int *ptr=(int)malloc(sizeof(int));
//     *ptr=10;
//     printf("%d\n",*ptr);
//     free(ptr);
//     ptr=NULL;
//     printf("%d\n",*ptr); */

// }




// Danglin pointer in c

#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr=NULL;
    {
        int a=9;
        ptr=&a;
        printf("a = %d\n",*ptr);
    }
   

    /*int *ptr=(int)malloc(sizeof(int));
    *ptr=10;
    printf("%d\n",*ptr);
    free(ptr);
    ptr=NULL;
    printf("%d\n",*ptr); */
    printf("%d\n",*ptr);

}