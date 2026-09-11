#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint32_t  num;
    uint32_t num_init;
    int bits = 0;
    char input[100];

    printf("ECE 528/L - Erik Santos - HW1\n");

    printf("Enter a number a non-negative integer: "); // Prompt user
    scanf("%u", &num); // Read and store input

    if ((int)num < 0){ // Type cast to make comparison
        printf("Invalid Input. Please enter a non-negative integer.\n");
        exit(0);
    }

    num_init = num;

    while (num != 0) {
        num &= (num-1); // Counts the set bits
        bits++;
    }

    printf("The number of set bits is: %d\n", bits); // Output the count of set bits
    return 0;
}
