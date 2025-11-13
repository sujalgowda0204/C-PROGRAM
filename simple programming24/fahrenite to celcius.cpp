#include <stdio.h>
int main()
{
    printf("convert fahrenite to celcius \n");
    printf("Enter the fahrenite u want to convert ");
    float h ;
    scanf("%f",&h);
    h=(h-32)*0.555556;
    printf("temprature in celsius is : %f",h);
    return 0;
}
