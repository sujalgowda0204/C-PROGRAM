#include <stdio.h>
int main()
{
    printf("To find the area and perimeter of a rectangle \n");
    printf(" Enter the  length and breathe :\n  ");
    int length , breathe ,a,p;
    scanf("%d %d",&length,&breathe);
    a=length * breathe;
    p= 2*( length + breathe);
    printf("Area is : %d\n",a);
    printf("Perimeter is : %d\n",p);
    return 0;
}
