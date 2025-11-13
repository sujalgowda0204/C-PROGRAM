#include <stdio.h>
void deleteLastElement(int arr1[], int *size) {
        if (*size > 0) {
            (*size)--;
        } else {
            printf("Array is already empty, cannot delete.\n");
        }
    }
int main() {
        int arr[] = {10, 20, 30, 40, 50};
        int size = sizeof(arr) / sizeof(arr[0]);
        printf("Original array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        deleteLastElement(arr, &size);
        printf("Array after deleting last element: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

        return 0;
    }
