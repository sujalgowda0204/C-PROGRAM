#include<stdio.h>
#include<string.h>
int main (){
int i;
char s1[100];
int len ;
int num=1 ;
printf("enter the word:");
scanf("%s", &s1);
len=strlen(s1) ;
for(i=0;i<len/2;i++){
    if(s1[i]!=s1[len-i-1]){
        num = 0 ;
    }
}

if(num==1){
    printf("%s is a pallidrome", s1);
}
else if(num==0){
    printf("%s is not a pallidrome", s1);
}
return 0;
}
