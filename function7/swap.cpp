#include <stdio.h>
void swape(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}
int main() {
    int x = 100, y = 120;

    printf("Before calling swapByValue: x = %d, y = %d\n", x, y);
    swape(x, y);
    printf("After calling swapByValue: x = %d, y = %d\n", x, y);

    return 0;
}
