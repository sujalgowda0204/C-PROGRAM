#include <stdio.h>

int main() {
    int matrix[3][3];
    int *ptr = &matrix[0][0];
    int largest, smallest;
    int i, j;

    printf("Enter elements for the 3x3 matrix:\n");


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", (ptr + (i * 3) + j));
    }}


    largest = *ptr;
    smallest = *ptr;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (*(ptr + (i * 3) + j) > largest) {
                largest = *(ptr + (i * 3) + j);
            }
            if (*(ptr + (i * 3) + j) < smallest) {
                smallest = *(ptr + (i * 3) + j);
            }
        }
    }

    printf("\nMatrix elements:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", *(ptr + (i * 3) + j));
        }
        printf("\n");
    }

    printf("\nLargest number in the matrix: %d\n", largest);
    printf("Smallest number in the matrix: %d\n", smallest);

    return 0;
}
