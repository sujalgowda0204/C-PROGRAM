
#include <stdio.h>
int main()
{
    printf("To find the area and perimeter of a square \n");
    printf("Enter the side length :  ");
    int side,a,p;
    scanf("%d",&side);
    a=side*side;
    p=4*side;
    printf("Area is : %d\n",a);
    printf("Perimeter is : %d\n",p);
}
