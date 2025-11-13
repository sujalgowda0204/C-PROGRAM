#include <stdio.h>

int main() {

    int values[5] ;
    printf("Enter 5 integers:\n");


    for (int i = 0; i < 5; ++i) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);
    }


    printf("\nDisplaying the entered integers:\n");


    for (int i = 0; i < 5; ++i) {
        printf("Value %d: %d\n", i + 1, values[i]) ;
    }

    return 0;
}
