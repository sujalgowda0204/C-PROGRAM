#include<stdio.h>
int main (){
int n,num;
int digit_count=0 ;
printf(" enter number:");
scanf("%d", &n);
if (n==0){
    printf("digit_count = 0");
}
else{
    for(;n!=0;n /=10){
        num = n% 10 ;
        digit_count++;
    }
}

printf("total number of digit are :%d", digit_count);


return 0;
}
