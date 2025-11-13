#include<stdio.h>
int leap(int a){
int result=0 ;
if(a%400==0){
   result=1;
}
else if(a%4==0 && a%100!=0){
    result =1 ;
 }

else{
    result =0 ;
}
return result;

}
int main (){
int lea;
printf(" enter the year :");
scanf("%d", &lea);
int ans = leap(lea) ;
if (ans==1){
    printf("%d is the leap year", lea);
}
else if(ans==0){
    printf("%d is not a leap year",lea);
}
return 0;
}
