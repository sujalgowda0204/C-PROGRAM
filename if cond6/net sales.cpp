#include<stdio.h>
int main (){
float ns,gs;
printf(" enter value of gross sales:");
scanf("%f", &gs);
if (gs>20000){
    ns=gs-(gs*0.15);
    printf("net sales is :%f", ns);
}
else if (gs>10000&&gs<20000){
    ns=gs-(gs*0.1);
    printf("net sales is :%f", ns);
}
else {
    ns=gs-(gs*0.05);
    printf("net sales is :%f", ns);
}
return 0;
}
