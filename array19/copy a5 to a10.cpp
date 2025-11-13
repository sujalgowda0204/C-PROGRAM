#include <stdio.h>

int main() {
    int A1[5] = {1, 2, 3, 4, 5};
    int A2[10];
    int j = 0;
    for (int i = 0; i < 5; i++) {
        A2[j] = A1[i];
        j += 2;
    }
    printf("Destination Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", A1[i]);
    }
    printf("\n");

    return 0;
}
