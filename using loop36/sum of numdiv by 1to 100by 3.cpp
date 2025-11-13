#include<stdio.h>
int main (){
int i;
int sum=0 ;
for ( i=0;i<=100;i++){
    if (i%3==0){
        sum +=i ;
    }

}
printf(" sum of digit is :%d", sum);
return 0;
}
