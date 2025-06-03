#include <stdio.h>  // Include standard input-output library for using printf and scanf

int main()  // Main function: Entry point of the program
{
    // Display a welcome message to the user
    printf("Hi There, Welcome to your MATH Assistant\n");

    int x;  // Declare an integer variable 'x' to store user's answer

    // Ask the user a multiplication question
    printf("What is the result of 3 x 4 = ");
    scanf("%d", &x);  // Read the user's input and store it in variable 'x'

    // Loop until the user enters the correct answer (12)
    while (x != 12) {
        // Notify the user that the answer is incorrect
        printf("Incorrect answer, do it again\n");

        // Encourage the user to think before answering
        printf("Think before typing the result\n");

        // Prompt for a new answer
        printf("Your new answer = ");
        scanf("%d", &x);  // Read the new input
    }

    // If the user enters the correct answer, print a success message
    printf("Correct Answer 3 x 4 = %d\n", x);

    return 0;  // Return 0 to indicate successful program execution
}
