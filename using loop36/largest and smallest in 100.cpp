#include<stdio.h>
int main (){
int i,n,large,small,num;
printf(" enter any 100 numbers \n ");
printf(" enter num 1 :");
scanf("%d", &num);
large=num ;
small=num ;
for (i=2;i<=100;i++){
    printf(" enter num %d :", i);
    scanf("%d", &num);

    if (num>large){
        large=num ;
    }

    if (num<small){
        small= num ;
    }}
    printf("largest number among hundered numbers is:%d\n", large);
    printf("smallest number among hundered numbers is:%d", small);
    return 0;

}







