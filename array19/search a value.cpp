#include <stdio.h>

int main() {
    int arr[] = {10, 25, 7, 42, 15, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchValue = 42;
    int found = 0;
    int num = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == searchValue) {
            found = 1;
            num = i;
            break;
        }
    }
    if (found) {
        printf("Value %d found at index %d.\n", searchValue, num);
    } else {
        printf("Value %d not found in the array.\n", searchValue);
    }

    return 0;
}
