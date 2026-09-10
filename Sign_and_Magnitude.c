#include <stdlib.h>
#include <stdio.h>

int main(){
    int num;
    int mag;

    printf("Enter a number to find its sign and magnitude!"); // Prompt user
    scanf("%d", &num); // Read and store input

    if (num < 0 ){
        printf("%d is negative.\n", num);
    }
    else if (num > 0){
        printf("%d is positive.\n", num);
    }
    else{
        printf("%d is zero.\n", num);
    }

    mag = abs(num); // Calculate magnitude
    printf("The magnitude of the number is: %d\n", mag); 
}
