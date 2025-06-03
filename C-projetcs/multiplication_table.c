/******************************************************************************
                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <stdio.h>  // Include the standard I/O library for printf and scanf functions

int main()  // Main function: starting point of the program
{
    // Print a welcome message for the user
    printf("Hi There, Welcome to your MATH Multiplication Table Assistant\n");

    int x, c;  // Declare two integer variables: x for user input number, c for continuation decision

    // Infinite loop: continues until user decides to exit
    while (1) {
        // Prompt the user to enter a number for which they want the multiplication table
        printf("Enter the number you would like to see its multiplication table\n");
        scanf("%d", &x);  // Read and store the number in variable x

        // Loop to print the multiplication table from 0 to 12
        for (int i = 0; i < 13; i++) {
            // Print each line of the multiplication table
            printf("%d x %d = %d\n", i, x, i * x);
        }

        // Ask the user if they want to see another multiplication table
        printf("Do you still want to see other numbers? 1 (yes), 0 (no)\n");
        scanf("%d", &c);  // Read the user's choice

        if (c == 0) break;  // If user enters 0, exit the loop and end the program
    }

    // Farewell message after exiting the loop
    printf("Thanks for using the program\nHope to see you again\n");
    printf("BYEEEEE....");

    return 0;  // Return 0 to indicate successful program termination
}
