#include <stdio.h>
int main()
{
    printf("Changing minute to hours \n");
    printf("Enter the minute u want to convert ");
    float h ;
    scanf("%f",&h);
    h=h/60;
    printf("The time in hours is : %f",h);

}
