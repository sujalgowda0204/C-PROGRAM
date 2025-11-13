#include<stdio.h>
int main (){
int n,i;
printf(" enter the value of n: ");
scanf("%d", &n);
int sum=0;
for(i=0;i<=n;i++){
    sum+=i ;
}
printf("the sum of first %d natural number is : %d", n,sum);
return 0;
}
