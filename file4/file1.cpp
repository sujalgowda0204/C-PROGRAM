#include <stdio.h>
int main()
{

    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    int ch, countl = 0, countw = 0, countc = 0, counts = 0, in_word=0;
    ch = fgetc(fptr);
    if (fptr == NULL)
    {
        printf("File does not execute");
    }
    while (ch != EOF)
    {
        countc++;

         if (ch == ' ' || ch == '\t')
        {
            in_word = 0;
            counts++;
        }
       else if (ch == '\n')
        {
            countl++;
            in_word = 0;
        }

        else if (!in_word)
        {
            countw++;
            in_word = 1;
        }
                ch = fgetc(fptr);
    }
    printf("length :%d,character:%d,space:%d,word:%d", countl, countc, counts, countw);
    return 0;
}
