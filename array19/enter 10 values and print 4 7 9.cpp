#include <stdio.h>

int main() {

    int values[10];


    printf("Enter 10 integers:\n");


    for (int i = 0; i < 10; ++i) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

printf("%d\n", values[3]);
printf("%d\n", values[6]);
printf("%d\n", values[8]);

    return 0;
}
