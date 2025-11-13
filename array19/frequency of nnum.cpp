#include <stdio.h>

int main() {
    int arr[10];
    int freq[10];
    int i, j, count;
    printf("Enter 10 elements for the array:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (i = 0; i < 10; i++) {
        count = 1;
        if (freq[i] != 0) {
            for (j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }
    printf("\nFrequency of each number in the array:\n");
    for (i = 0; i < 10; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
