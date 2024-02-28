#include <stdio.h>

int findUnique(int arr[], int n) {
    int ones = 0, twos = 0;
    int common_bit_mask;

   
    for (int i = 0; i < n; i++) {
        
        twos |= (ones & arr[i]);
        ones ^= arr[i];
        common_bit_mask = ~(ones & twos);
        ones &= common_bit_mask;
        twos &= common_bit_mask;
    }

    // The unique number will be in "ones"
    return ones;
}

int main() {
    int arr[] = {4, 4, 4, 5, 5, 5, 6, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("The unique number is: %d\n", findUnique(arr, n)); // Output: 7

    return 0;
}

