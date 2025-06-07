#include <stdio.h>

// Function to search for a value in an array and count its occurrences
void linear_search(int array_name[], int size, int value){
    int x = 0; // Counter for occurrences
    // Loop through each element in the array
    for (int i = 0; i < size; i ++){
        // If the current element matches the value, increment counter
        if (array_name[i] == value){
            x++; // increment the x value
        }
    }
    // Print how many times the value exists in the array
    printf("%d exists %d times\n", value, x);
}

int main() {
    // Declare and initialize an array of 5 integers
    int array[5] = {1,1,3,4,10};
    // Call linear_search to find how many times 1 appears in the array
    linear_search(array, 5, 1);
    return 0;
}
