#include <stdio.h>

/*
 * Function: even_or_odd
 * ---------------------
 *   Checks if a number is even or odd.
 *
 *   x: The integer to check.
 *
 *   returns: "Even" if x is even, "Odd" if x is odd.
 */
char* even_or_odd(int x) {
    if (x % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

int main(void) {
    printf("Welcome to the EVEN || ODD CHECKER!\n");
    int num;
    printf("Enter the number to CHECK: ");
    scanf("%d", &num);

    char* ptr = even_or_odd(num);
    printf("Number %d is %s\n", num, ptr);

    // Example test cases:
    // Input: 4 -> Output: Number 4 is Even
    // Input: 7 -> Output: Number 7 is Odd

    return 0;
}
