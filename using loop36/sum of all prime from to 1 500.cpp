#include<stdio.h>
int main (){
int i,n,j;
int num  ;
int sum=0 ;
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

    sum += i;
}}
printf("sum of all prime number form 1 to %d : %d\n ", n,sum);
return 0;



}
