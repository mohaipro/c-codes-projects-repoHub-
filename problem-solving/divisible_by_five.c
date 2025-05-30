#include <stdio.h>
/*
 * Function: is_divisible_by_five
 * ------------------------------
 *   Checks if a number is divisible by 5.
 *
 *   x: The integer to check.
 *
 *   returns: 1 if x is divisible by 5, 0 otherwise.
 */
int is_divisible_by_five(int x) {
    if (x % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    int x, y;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &x);

    // Check divisibility and store the result
    y = is_divisible_by_five(x);

    // Output the result
    if (y == 1) {
        printf("%d is divisible by 5\n", x);
    } else {
        printf("%d is not divisible by 5\n", x);
    }

    return 0;
}
