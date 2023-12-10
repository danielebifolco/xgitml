#include <stdio.h>

int main() {
    // Declare a variable to store the number
    int number;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (number % 2) {
        // If the remainder is 0, the number is even
        printf("%d is an even numer.\n", number);
    } else {
        // If the remainder is not 0, the number is odd
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
