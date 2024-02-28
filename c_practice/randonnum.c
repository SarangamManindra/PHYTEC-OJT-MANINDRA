#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    const int size = 25;
    int generatedNumbers[size];

    // Initialize array with numbers 1 to 25
    for (int i = 0; i < size; ++i) {
        generatedNumbers[i] = i + 1;
    }

    // Shuffle the array using the Fisher-Yates algorithm
    for (int i = size - 1; i > 0; --i) {
        int j = rand() % (i + 1);

        // Swap elements at positions i and j
        int temp = generatedNumbers[i];
        generatedNumbers[i] = generatedNumbers[j];
        generatedNumbers[j] = temp;
    }

    // Print the shuffled array
    for (int i = 0; i < size; ++i) {
        printf("%d ", generatedNumbers[i]);
    }

    printf("\n");

    return 0;
}

