#include<stdio.h>
 typedef struct customer
{
int accountno;
char name[100];
int balance;
}cust;
void printacc(cust c,int account, int amount, int code){
if(c.accountno== account) {
if(code==0) {
if(amount<=c.balance){
c.balance=c.balance-amount;
printf("now your balance is %d",c.balance);

}
else{
printf("the balance is insufficient for the specified withdrawal");
}}
else if (code==1){
c.balance += amount ;
printf("now your balance is %d",c.balance);
}}}
int main(){
int amount, code,accounts ;
printf("enter account no");
scanf("%d", &accounts);
printf("enter amount you want to withdraw or deposit");
scanf("%d",&amount);
printf("for withdrawel enter code & for deposit enter code 1");
scanf("%d",&code);
cust c1={112467, "sujal",90};
cust c2={114876, "Dax",100};
 cust c3={119672, "aryan", 80};
 cust c4={114823, "gowda", 140};
 cust c5= {119476, "umesh",1000};
 printacc(c1, accounts, amount, code);
 printacc (c2,accounts, amount, code);
printacc(c3,accounts, amount, code);
 printacc(c4,accounts, amount, code);
 printacc(c5,accounts, amount,code);
return 0;
}
