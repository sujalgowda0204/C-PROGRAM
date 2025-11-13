#include<stdio.h>
int main (){
int i,n,h;
int sum;
printf(" enter the number :"),
scanf("%d", &n);
h= n/2 ;
for(i=1;i<=h;i++){
    if(n%i==0){
       sum +=i ;
    }
}
if ( sum==n){
    printf("%d is a perfect number as sum is %d", n,sum);
}
else {
    printf("%d is not a perfect number as sum is %d", n,sum);
}
   return 0;
}
