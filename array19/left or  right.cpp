#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tempArr[10];
    int n, i, j;
    char direction;
    printf("Original array: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter number of positions to shift (n): ");
    scanf("%d", &n);

    printf("Enter direction (L for left, R for right): ");
    scanf(" %c", &direction);
    n = n % 10;

    if (direction == 'L' || direction == 'l') {
        for (i = 0; i < 10; i++) {
            if (i < 10 - n) {
                tempArr[i] = arr[i + n];
            } else {
                tempArr[i] = 0;
            }
        }
    } else if (direction == 'R' || direction == 'r') {
        for (i = 0; i < 10; i++) {
            if (i >= n) {
                tempArr[i] = arr[i - n];
            } else {
                tempArr[i] = 0;
            }
        }
    } else {
        printf("Invalid direction entered.\n");
        return 1;
    }
    for (i = 0; i < 10; i++) {
        arr[i] = tempArr[i];
    }
    printf("Array after shifting: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
