#include<stdio.h>

int main()
{
    int a, b;
    printf ("value of a");
    scanf ("%d", &a);
    printf ("value of b");
    scanf("%d", &b);

    if (a<b)
        printf("greater value is :%d", b);
        else
        printf("smaller value is :%d", b);

        return 0;


}
