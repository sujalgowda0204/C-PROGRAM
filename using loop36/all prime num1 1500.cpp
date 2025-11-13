#include<stdio.h>
int main (){
int i,n,j;
int num  ;
printf("enter the value of n:");
scanf("%d", &n);
printf("prime number from 1 to %d:\n", n);
for(i=2;i<=n;i++){
        num=1 ;
    for(j=2;j<i;j++){
        if(i%j==0){
            num=0;
        break ;
        }
    }



if(num==1){

    printf("%d,", i);
}}
return 0;



}
