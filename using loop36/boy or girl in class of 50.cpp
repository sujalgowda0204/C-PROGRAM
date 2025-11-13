#include<stdio.h>
int main (){
int i,n;
n=50;
char gen;
const char m = 'm';//boys
const char f='f';//girls
int boys_count=0;
int girls_count=0;
printf("enter you gender:\n");
for (i=1;i<=nm
m;i++){
    printf("enter gender of student %d:", i);
    scanf(" %c", &gen);
    if (gen == m){
        boys_count++;
    }
   else if (gen == f){
        girls_count++;
    }

}
printf(" number of boys in class is :%d\n", boys_count);
printf(" number of girls in class is:%d\n", girls_count);
return 0;
}
