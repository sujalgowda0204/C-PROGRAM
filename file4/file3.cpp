#include <stdio.h>
#include<string.h>
int main()
{

char arr[1000];
    FILE *fptr;

    fptr = fopen("file3.txt", "r");
        if(fptr==NULL){
        printf("File is not working");
    }
fgets(arr,1000,fptr);

printf("%s",arr);
while (arr[999]!=EOF){


    if (fgets(arr, 1000, fptr) != NULL) {
        printf(" %s", arr);
    }}
    return 0;
}
