#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    // Check if the number is even or odd
    if (number % 2) {
        // If the remainder is 0, the number is even
        printf("%d is an even number.\n", number);
    }
    return 0;
}
