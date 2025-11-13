#include <stdio.h>
int power(int a, int b) {
    int result = 1;
   for (int i = 0; i < b; ++i) {
        result *= a;
    }
    return result;
}

int main() {
    int base, exponent;
    printf("Enter the base (a): ");
    scanf("%d", &base);
    printf("Enter the exponent (b): ");
    scanf("%d", &exponent);
    int ans = power(base, exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, ans);
    return 0;
}
