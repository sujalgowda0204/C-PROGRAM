#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("enter value of a:");
     scanf("%d", &a);
    printf("enter value of b:");
    scanf("%d", &b);
     printf("enter value of c:");
     scanf("%d", &c);
    if(a>b&&a>c){
        printf("a is largest\n");
        if(b>c){
            printf("c is smallest\n");
        }
        else{
            printf("b is smallest\n");
        }
    }
    if(b>c) {
        printf("b is largest\n");
         if(a>c){
            printf("c is smallest\n");
        }
        else{
            printf("a is smallest\n");
        }
     }
     else{ printf("c is largest\n");
       if(b>a){
            printf("a is smallest\n");
        }
        else{
            printf("b is smallest\n");
        }

     }

    return 0;
}
