#include <stdio.h>

// This program calculates how many people can fit in a train carriage
// based on the carriage area and the average area occupied by one person.

// Returns the number of people that fit, given carriage area and average person area.
// Returns -1 if avg_person is zero (to avoid division by zero).
// Returns 0 if area or avg_person is negative.
int train_carriage(int area, int avg_person){
    // Check for division by zero
    if (avg_person == 0){
        return -1;
    }
    // Check for negative inputs
    if (area < 0 || avg_person < 0){
        return 0;
    }
    // Calculate and return capacity
    return area / avg_person;
}

// Runs test cases to verify the train_carriage function
void run_tests(void){
    printf("\n\nRunning test cases:\n");
    printf("Test 1 (20, 2): %d\n", train_carriage(20, 2));   // Expected: 10
    printf("Test 2 (0, 2): %d\n", train_carriage(0, 2));     // Expected: 0
    printf("Test 3 (20, 0): %d\n", train_carriage(20, 0));   // Expected: -1
    printf("Test 4 (-10, 2): %d\n", train_carriage(-10, 2)); // Expected: 0
    printf("Test 5 (20, -2): %d\n", train_carriage(20, -2)); // Expected: 0
}

int main(void){
    int area, average_person;
    printf("Welcome to the train carriage calculator program\n");
    printf("Enter the area of the carriage in (m2): ");
    scanf("%d", &area);
    printf("Enter the area of average person in (m2): ");
    scanf("%d", &average_person);

    int out = train_carriage(area, average_person);

    // Handle special cases
    if (out == -1) {
        printf("Error: Average person area cannot be zero.\n");
    } else if (out == 0) {
        printf("Error: Area values must be positive.\n");
    } else {
        printf("Train carriage capacity => %d\n", out);
    }

    // Run test cases
    run_tests();
}
