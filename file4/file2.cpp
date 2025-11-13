#include <stdio.h>
#include<string.h>
int main()
{
char arr[1000];
    FILE *fptr;
    fptr = fopen("file2.txt", "w");
   printf("enter string of one line:");
gets(arr);

   fprintf(fptr,"%s",arr);

    return 0;
}
