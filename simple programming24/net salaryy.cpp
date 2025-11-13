#include<stdio.h>

int main()
{
   printf("calculating the net salary\n");
   printf("eneter the gross sasalary");
   float n,g,a,d;
   scanf("%f", &g);
   a = g *0.1;
   d = g *0.03;
   n = g +a - d ;
   printf("total net salary is: %f\n",n);
   printf(" allowance is : %f\n",a);
   printf("deduction is : %f\n",d);


    return 0;
}
