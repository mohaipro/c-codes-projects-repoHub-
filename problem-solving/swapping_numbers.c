#include <stdio.h>

/*
 * Program: Number Swapping
 * ------------------------
 *   Swaps the values of two integers entered by the user.
*/

int main(void) {
    int x, y, temp;

    // Welcome message
    printf("Welcome to the number swapping program!\n");

    // Input values
    printf("Enter the first number (x): ");
    scanf("%d", &x);
    printf("Enter the second number (y): ");
    scanf("%d", &y);

    // Swapping logic
    temp = x;
    x = y;
    y = temp;

    // Output the swapped values
    printf("After swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Example test cases:
    // Input: x = 5, y = 10 -> Output: x = 10, y = 5
    // Input: x = -3, y = 7 -> Output: x = 7, y = -3

    return 0;
}
