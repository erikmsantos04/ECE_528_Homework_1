#include <stdlib.h>
#include <stdio.h>

int main(){

    int num, first = 0, second = 1, next;

    printf("ECE 528/L - Erik Santos - HW1\n");

    printf("Enter N (2 or greater) : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Invalid Input. Please enter a non-negative integer. \n");
        exit(0);
    }
    else if(num < 2 && num > 0) {
        printf("Invalid Input. Please enter an integer greater than or equal to 2. \n");
        exit(0);
    }

    printf("Fibonacci sequence up to %d terms:\n", num);
    for (int i = 0; i <= num; i++){
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}