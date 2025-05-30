#include <stdio.h>

/*
 * Function: square_number
 * -----------------------
 *   Returns the square of the given integer.
 *
 *   num: The integer to square.
 *
 *   returns: The square of num.
*/
int square_number(int num) {
    return num * num;
}

int main(void) {
    // Example test cases
    int x1 = 2;
    int x2 = -3;
    int x3 = 0;

    printf("square(%d) = %d\n", x1, square_number(x1)); // Output: square(2) = 4
    printf("square(%d) = %d\n", x2, square_number(x2)); // Output: square(-3) = 9
    printf("square(%d) = %d\n", x3, square_number(x3)); // Output: square(0) = 0

    return 0;
}
