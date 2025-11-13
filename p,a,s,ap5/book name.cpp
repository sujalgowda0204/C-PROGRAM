#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
int main() {

    char *books[3];
    int i;
    printf("Enter the names of three books:\n");
    for (i = 0; i < 3; i++) {
        books[i] = (char *)malloc(MAX_NAME_LENGTH * sizeof(char));
        if (books[i] == NULL) {
            printf("Memory allocation failed!\n");
            for (int j = 0; j < i; j++) {
                free(books[j]);
            }
            return 1;
        }

        printf("Book %d: ", i + 1);
        fgets(books[i], MAX_NAME_LENGTH, stdin);
        size_t len = strcspn(books[i], "\n");
        if (len < MAX_NAME_LENGTH) {
            books[i][len] = '\0';
        }
    }
    printf("\nStored book names are:\n");
    for (i = 0; i < 3; i++) {
        printf("Book %d: %s\n", i + 1, books[i]);
    }
    for (i = 0; i < 3; i++) {
        free(books[i]);
    }

    return 0;
}
