#include<stdio.h>
int main (){
int i;
float num,mean;
float sum=0;
printf("enter any ten numbers\n");
for(i=0;i<10;i++){
    printf("enetr number %d: ", i+1);
    scanf("%f", &num);
    sum += num ;



}

mean= sum/10 ;
printf("sum is %f :\n", sum);
printf(" mean is %f :\n", mean);
return 0;







}
