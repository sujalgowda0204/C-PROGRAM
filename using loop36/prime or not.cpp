#include<stdio.h>
int main (){
int i,n;
int num=0 ;
printf("enter any number: ") ;
scanf("%d", &n);

for(i=2;i<n;i++){
    if(n%i==0){
        num = 1;
    }
}
if(num==0){
    printf("%d is a prim number", n);
}
else if (num==1){
    printf("%d is not a prime number", n) ;
}

return 0;




}
