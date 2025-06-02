/******************************************************************************

    Simple Calculator in C
    -----------------------
    This program functions as a basic calculator. It prompts the user to input 
    two float numbers and then an operation (`+`, `-`, `x`, or `/`). 
    Based on the operation, it performs the corresponding arithmetic computation 
    and prints the result.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

// Function that handles calculator logic
void calculator_func(void) {
    float x1, x2;     // Variables to store two input numbers

    // Prompting user for first number
    printf("Enter X1: ");
    scanf("%f", &x1);

    // Prompting user for second number
    printf("Enter X2: ");
    scanf("%f", &x2);

    char op;  // Variable to store the operation

    // Prompting user for arithmetic operation
    printf("Enter operation (+, -, x, /): ");
    scanf(" %c", &op);  // Leading space before %c helps consume any leftover newline

    // Switch-case to handle selected operation
    switch (op) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", x1, x2, x1 + x2);
            break;

        case '-':
            printf("%.2f - %.2f = %.2f\n", x1, x2, x1 - x2);
            break;

        case 'x':
        case '*':  // Allow both 'x' and '*' for multiplication
            printf("%.2f x %.2f = %.2f\n", x1, x2, x1 * x2);
            break;

        case '/':
            // Check for division by zero
            if (x2 != 0) {
                printf("%.2f / %.2f = %.2f\n", x1, x2, x1 / x2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Unknown operation!\n");
    }
}

int main() {
    // Call the calculator function
    calculator_func();
    return 0;  // Return success status
}
