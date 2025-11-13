#include<stdio.h>
int main(){
float ns,gs;
printf("enter gross salary");
scanf("%f",&gs);
if(gs>10000){
    ns=gs+(gs*0.1)-(gs*0.03);
    printf(" net salary is:%f",ns);
}
if(gs>5000 && gs<10000){
    ns=gs+(gs*0.07)-(gs*0.02);
    printf("net salary is:%f",ns);
}

return 0;

}
