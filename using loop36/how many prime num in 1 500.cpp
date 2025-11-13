#include<stdio.h>
int main (){
int i,n,j;
int num  ;
int prime=0 ;
printf("enter the value of n:");
scanf("%d", &n);

for(i=2;i<=n;i++){
        num=1 ;
    for(j=2;j<i;j++){
        if(i%j==0){
            num=0;
        break ;
        }
    }



if(num==1){

    prime++;
}}
printf(" num of prime number from 1 to %d is %d", n,prime);
return 0;



}
