#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int numNotes = sizeof(notes) / sizeof(notes[0]);
    int i, count ;
    printf("Enter the amount: ");
    scanf("%d", &amount);
    printf("Minimum number of notes required for %d are:\n", amount);
    for (i = 0; i < numNotes; i++) {
        if (amount >= notes[i]) {
            count = amount / notes[i];
            amount = amount % notes[i];
            printf("%d note(s) of %d Rs.\n", count, notes[i]);
        }
    }

    return 0;
}
