#include <stdio.h>
#include <string.h>



int main() {
    char Str[100];

    printf("Enter a string: ");
    scanf("%s", Str);

    printf("Original string: %s\n", Str);

    int length = strlen(Str);
    int i, j;
    char temp ;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = Str[i];
        Str[i] = Str[j];
        Str[j] = temp;
    }

    printf("Reversed string: %s\n", Str);

    return 0;
}
