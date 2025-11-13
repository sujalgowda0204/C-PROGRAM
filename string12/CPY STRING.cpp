#include<stdio.h>
#include<string.h>
int main (){
char s1[100];
char s2[100];
printf("enter the word :");
scanf("%s", &s1);
strcpy(s2,s1);
printf("the copied string is :%s", s2);
return 0;



}
