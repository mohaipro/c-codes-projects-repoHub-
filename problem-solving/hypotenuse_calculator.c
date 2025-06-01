/*
 * hypotenuse_calculator.c
 * -----------------------
 * Calculates the hypotenuse of a right triangle given the lengths
 * of the adjacent and opposite sides using the Pythagorean theorem.
 *
 * Usage:
 *   Compile: gcc hypotenuse_calculator.c -o hypotenuse_calculator -lm
 *   Run: ./hypotenuse_calculator
 *
 * Author: [Your Name]
 * License: MIT
 */

#include <stdio.h>
#include <math.h>

/*
 * Function: calculate_hypotenuse
 * ------------------------------
 * Calculates the hypotenuse of a right triangle.
 *
 * opposite: length of the opposite side (must be non-negative)
 * adjacent: length of the adjacent side (must be non-negative)
 *
 * returns: the length of the hypotenuse, or 0.0 if input is invalid
 */
float calculate_hypotenuse(float opposite, float adjacent){
    // Handle invalid (negative) inputs
    if (opposite < 0 || adjacent < 0){
        return 0.0;
    }
    float hypo = sqrt((opposite * opposite) + (adjacent * adjacent));
    return hypo;
}

int main() {
    float adj, opp, hypo;

    // Prompt user for input
    printf("Enter the adjacent of the right triangle: ");
    scanf("%f", &adj);
    printf("Enter the opposite of the right triangle: ");
    scanf("%f", &opp);

    // Calculate hypotenuse
    hypo = calculate_hypotenuse(opp, adj);

    // Output result
    printf("The hypotenuse of the right triangle => %.2f\n", hypo);
    return 0;
}
