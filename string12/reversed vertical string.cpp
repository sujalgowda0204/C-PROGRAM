#include<stdio.h>
#include<string.h>
int main () {
int i;
int len ;
char s1[50] ;
printf("enter the word:");
scanf("%s", &s1) ;
len = strlen(s1) ;
strrev(s1);
for(i=0;i<len;i++){
   printf("%c\n", s1[i]);
}
return 0;

}
