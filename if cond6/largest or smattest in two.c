#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter value of a:");
     scanf("%d", &a);
    printf("enter value of b:");
    scanf("%d", &b);

    if (a>b){
        printf("a is larger then b");
    }
     else{
        printf("b is larger then a");
     }


    return 0;
}
