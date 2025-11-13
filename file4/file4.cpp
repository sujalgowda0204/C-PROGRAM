#include <stdio.h>
#include<string.h>
int main()
{

char arr[1000];
    FILE *fptr;

    fptr = fopen("file4.csv", "a");
        if(fptr==NULL){
        printf("File is not working");
    }
    char name[100];
    int roll,no=1;
 fprintf(fptr,"Name,Roll no\n");
while (no==1)
{
    /* code */
   printf("enter your name:");
    gets(name);
    printf("enter your roll no:");
    scanf("%d",&roll);

    fprintf(fptr,"%s,%d\n",name,roll);
printf("enter 1 if continue and 2 to terminate");
scanf("%d",&no);
getchar();
}
fclose(fptr);
  return 0;
}
