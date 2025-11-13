#include <stdio.h>
int main()
{
    printf("convert celcius to fahrenite \n");
    printf("Enter the celcius u want to convert ");
    float h ;
    scanf("%f",&h);
    h=(h*1.8)+32;
    printf("temprature in fahrenite is : %f",h);
    return 0;
}
