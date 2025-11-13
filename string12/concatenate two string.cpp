#include <stdio.h>
#include <string.h>

int main() {
    char destination_string[50] = "sujal ";
    char source_string[] = "gowda";

    strcat(destination_string, source_string);

    printf("%s\n", destination_string);

    return 0;
}
