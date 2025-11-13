#include<stdio.h>
#include<string.h>
int main (){
char new_string[100] ;
int length ;
printf("enter the word:");
scanf("%s", &new_string);
length = strlen(new_string) ;
printf(" the length of %s is %d ", new_string,length);
return 0;



}
