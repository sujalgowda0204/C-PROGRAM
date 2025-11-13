#include<stdio.h>

int main()
{
   printf("to find the avreage marks and total from three subject \n");
   printf("enter the marks of three subject");
   float p,c,m,a,t;
   scanf("%f %f %f", &p, &c, &m);
   a = ( p+c+m)/3 ;
   t = p+c+m ;
    printf(" avreage marks of three suject is: %f\n", a);
    printf("total marks of three sujct is :%f\n", t);


    return 0;
}
