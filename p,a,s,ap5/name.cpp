#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, last_space = -1;
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            last_space = i;
        }
    }
    if (name[0] != '\0') {
        printf("%c. ", name[0]);
    }
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ' && i < last_space) {
            while (name[i + 1] == ' ') {
                i++;
            }
            printf("%c. ", name[i + 1]);
        }
    }
    if (last_space != -1) {
        printf("%s\n", &name[last_space + 1]);
    } else {
        printf("\n");
    }

    return 0;
}
