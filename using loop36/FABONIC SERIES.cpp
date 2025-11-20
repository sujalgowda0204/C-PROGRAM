#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, NUM;

    printf("Enter how many terms you want: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", b);
        NUM = a + b;
        a = b;
        b = NUM;
    }

    printf("\n");
    return 0;
}

