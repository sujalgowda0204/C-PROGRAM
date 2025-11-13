#include <stdio.h>

int main() {
    int arr[10];
    int n = 5;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    int newValue = 60;
    if (n < 10) {
        arr[n] = newValue;
        n++;
        printf("Element %d inserted successfully at the end.\n", newValue);
    } else {
        printf("Array is full, cannot insert new element.\n");
    }
    printf("Updated array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
