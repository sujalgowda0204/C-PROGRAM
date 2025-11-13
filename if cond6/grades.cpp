#include<stdio.h>
int main(){
int s1,s2,s3,a;
printf("enter marks of s1:");
scanf("%d", &s1);
printf("enter marks of s2:");
scanf("%d", &s2);
printf("enter marks of s3:");
scanf("%d", &s3);
a=(s1+s2+s3)/3;
if(s1<35){
    printf("fail in s1\n");
}
if(s2<35){
    printf("fail in s2\n");
}
if(s3<35){
    printf("fail in s3\n");
}
if(a>=70){
    printf("grade is : distinction class");
}
if(a<70&&a>=60){
    printf("grade is : first class");
}
if(a<60&&a>=50){
    printf("grade is : second class");
}
if(a<50&&a>=35){
    printf("grade is : third class");
}
if (a<35){
    printf("fail");
}
return 0;
}
