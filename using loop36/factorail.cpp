#include<stdio.h>
int main (){
int n,i;
int fac = 1 ;
printf("enter value of n:");
scanf("%d",&n);
for(i=1;1<=n;i++){
    fac *=i ;
}

printf("factorial of %d is %d", n, fac);
return 0;



}
