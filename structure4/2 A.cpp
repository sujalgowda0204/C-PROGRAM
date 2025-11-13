#include<stdio.h>
typedef struct customer{
int accountno;
char name[100];
int balance;
}cust;
void printacc(cust c){
printf("%d\n",c.accountno) ;
if(c.balance<100) {
printf("balance is below then 100:%s\n",c.name);
}else{
printf(" balance is above 100 : %s \n",c.name);
}
}
int main(){
 cust c1={112346, "SUJAL", 70};
 cust c2={114789, "DAKSH", 120};
 cust c3={119847, "ARYAN", 30};
 cust c4={112785, "DEV",140};
 cust c5={115793, "NEV",50};
printacc(c1);
printacc(c2);
 printacc(c3);
 printacc(c4);
 printacc(c5);
return 0;
}
