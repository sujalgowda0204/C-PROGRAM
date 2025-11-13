#include<stdio.h>
#include<string.h>
int main (){
char _string[100];
printf("enter the word:");
scanf("%s", &_string);
strupr(_string);
printf("word in upercase :%s", _string);
return 0;



}
