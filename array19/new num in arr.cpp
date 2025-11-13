#include <stdio.h>

#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int current_size = 5;
    int new_element, position, i;
    printf("Original array: ");
    for (i = 0; i < current_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);
    printf("Enter the position (0-indexed) to insert at: ");
    scanf("%d", &position);
    if (position < 0 || position > current_size || current_size >= 100) {
        printf("Invalid position or array is full.\n");
    } else {
        for (i = current_size; i > position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position] = new_element;
        current_size++;
        printf("Array after insertion: ");
        for (i = 0; i < current_size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
