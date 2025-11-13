#include<stdio.h>
int main (){
int i,digit;
int sum;
printf(" enter the number :");
scanf("%d", &i);

if(i==0){
    printf("sum =0");
}
else{
    for(;i!=0;i/=10){
        digit =i %10 ;
        sum += digit ;
    }
}
printf("sum of digt is :%d", sum);
    return 0;

}
