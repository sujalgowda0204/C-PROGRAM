#include<stdio.h>
int main (){
int i,n,sum;
printf(" enetr vvalue of n :");
scanf("%d", &n);
for(i=0;i<n;i++){
    sum += (2*i)+1 ;

}
printf("sum of first %d odd num is %d",n, sum);
return 0;




}
