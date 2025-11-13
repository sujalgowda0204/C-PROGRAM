#include <stdio.h>
int main()
{
    printf("Changing hours to minutes \n");
    printf("Enter the hours u want to convert ");
    float h ;
    scanf("%f",&h);
    h=h*60;
    printf("The time in minutes is : %f",h);

    return 0;
}

