#include<stdio.h>
int main (){
int i,digit;
printf(" enter the number :");
scanf("%d", &i);
printf("the digit are:");
if(i==0){
    printf("0");
}
else{
    for(;i!=0;i/=10){
        digit =i %10 ;
        printf("%d\t", digit);
    }
}
printf("\n");
    return 0;

}
