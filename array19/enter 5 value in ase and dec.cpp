#include <stdio.h>

int main() {
    int arr[5];
    int i, j, temp;
    int choice;


    printf("Enter 5 integer values:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    printf("\nChoose sorting order:\n");
    printf("1. Ascending Order\n");
    printf("2. Descending Order\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);


    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            } else if (choice == 2) {
                if (arr[j] < arr[j + 1]) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }


    printf("\nSorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
