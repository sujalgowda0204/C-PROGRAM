#include <stdio.h>
int main()
{
    printf("To find the area of triangle \n");
    printf("Enter the height and base  :");
    float h,b,a;
    scanf("%f %f",&h,&b);
    a=0.5*h*b;
    printf("Area is : %f\n",a);
     return 0;
}
