#include<stdio.h>

int main()
{
   printf("calculating the net sales\n");
   printf("eneter the gross sales");
   float ns,g;
   scanf("%f", &g);
    ns = g - (g*0.1);
   printf("total net sales is: %f\n",ns);

    return 0;
}
