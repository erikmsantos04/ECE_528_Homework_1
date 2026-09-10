#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint32_t  num;
    uint32_t num_init;
    int bits = 0;

    printf("ECE 528/L - Erik Santos - HW1\n");

    printf("Enter a number a non-negative integer: "); // Prompt user
    scanf("%u", &num); // Read and store input

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }
    else if (num >= 4294967295){
        printf("Please enter a number in the valid range of unsigned 32-bit integers. \n");
        return 1; // Exit the program with an error code
    }

    num_init = num;

    while (num != 0) {
        num &= (num-1);
        bits++;
    }

    printf("The number of set bits is: %d\n", bits); // Output the count of set bits
    return 0;
}