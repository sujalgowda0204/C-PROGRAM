#include<stdio.h>
int main () {
int i ,n ,num;
int pos_count=0;
int neg_count=0;
int zero_count=0;
n=200;
printf(" enter any 200 numbers :\n");
for(i=1; i<=5;i++){
    printf("enter number %d:", i);
    scanf("%d", &num);
    if(num<0){
        printf(" number is negative: %d\n", num);
        neg_count++;
    }
    if(num>0){
        printf("number is positive: %d\n", num);
        pos_count++;
    }
    if (num==0){
        printf("number is zero\n");
        zero_count++;
    }
}
printf(" final count\n");
printf(" positive number are:%d\n", pos_count);
printf(" negative number are:%d\n", neg_count);
printf(" number of zeros are:%d\n", zero_count);


return 0;

}
