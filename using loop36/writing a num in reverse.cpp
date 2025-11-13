#include<stdio.h>
int main (){
int i,digit;
printf(" enter the number :");
scanf("%d", &i);

if(i==0){
    printf("0");
}
else{
     printf(" reverase number is :") ;
    for(;i!=0;i/=10){
        digit =i %10 ;
        printf("%d", digit);
    }
}
printf("\n");
    return 0;

}
