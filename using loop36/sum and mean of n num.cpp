#include<stdio.h>
int main (){
int i,n;
float num,mean;
float sum=0;
printf(" eneter how many number you need to enter:");
scanf("%d", &n);
printf("enter any %d numbers\n", n);
for(i=0;i<n;i++){
    printf("enetr number %d: ", i+1);
    scanf("%f", &num);
    sum += num ;



}

mean= sum/n ;
printf("sum is %f :\n", sum);
printf(" mean is %f :\n", mean);
return 0;







}

