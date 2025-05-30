#include <stdio.h>

/*
 * Function: pass_fail
 * -------------------
 *   Determines if the score is a pass or fail.
 *
 *   score: The score to check.
 *
 *   returns: "Pass" if score >= 50, otherwise "Fail".
 */
const char* pass_fail(int score) {
    if (score >= 50) {
        return "Pass";
    } else {
        return "Fail";
    }
}

int main(void) {
    int s;

    // Prompt user for input
    printf("Enter the score of your subject: ");
    scanf("%d", &s);

    const char* result = pass_fail(s);

    // Output the result
    printf("You have %sed the subject.\n", result);

    // Example test cases:
    // Input: 75 -> Output: You have Pass the subject.
    // Input: 40 -> Output: You have Fail the subject.
    // Input: 50 -> Output: You have Pass the subject.

    return 0;
}
