#include <stdio.h>

/*
 * Function: distribute_food
 * -------------------------
 *   Calculates the amount of food each person gets.
 *
 *   total_food: The total amount of food available.
 *   people: The number of people to distribute the food to.
 *
 *   returns: The amount of food per person.
 */
float distribute_food(float total_food, int people) {
    return total_food / people;
}

int main(void) {
    int people;
    float total_food;

    // Prompt user for input
    printf("Enter the number of people: ");
    scanf("%d", &people);
    printf("Enter the total amount of food: ");
    scanf("%f", &total_food);

    // Check for zero or negative people to avoid division by zero
    if (people <= 0) {
        printf("Number of people must be greater than zero.\n");
        return 1;
    }

    float out = distribute_food(total_food, people);
    printf("Each person gets %.2f units of food.\n", out);

    // Example test cases
    // Test 1: 10 units of food, 2 people -> 5.00 per person
    // Test 2: 7.5 units of food, 3 people -> 2.50 per person
    // Test 3: 0 units of food, 4 people -> 0.00 per person

    return 0;
}
