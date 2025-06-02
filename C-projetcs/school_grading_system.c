#include <stdio.h>
#include <stdlib.h>  // For malloc
#include <string.h>  // For strcpy (optional)

// Function to get user's name
char* get_name(void) {
    char temp[100];  // Use a large enough temporary buffer
    printf("Enter your name: ");
    scanf("%99s", temp);  // Avoid buffer overflow

    // Dynamically allocate memory for the name
    char* ptr = malloc(strlen(temp) + 1);  // +1 for null terminator
    if (ptr != NULL) {
        strcpy(ptr, temp);
    }
    return ptr;
}

// Function to get user's age
int get_age(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return age;
}

// Main school system logic
void school_system(void) {
    char* name = get_name();   // Get name (dynamically allocated)
    int age = get_age();       // Get age
    float grade;

    printf("Enter your grade: ");
    scanf("%f", &grade);

    // Print grade classification
    printf("\nOur school system is working as follows\n");
    printf("Excellent: 90 - 100\nVery Good: 80 - 89\n");
    printf("Good: 70 - 79\nPass: 60 - 69\nFail: Below 60\n\n");

    // Classification output
    if (grade >= 90) {
        printf("%s is %d years old and got Excellent this year.\n", name, age);
    } else if (grade >= 80) {
        printf("%s is %d years old and got Very Good this year.\n", name, age);
    } else if (grade >= 70) {
        printf("%s is %d years old and got Good this year.\n", name, age);
    } else if (grade >= 60) {
        printf("%s is %d years old and got Pass this year.\n", name, age);
    } else {
        printf("%s is %d years old and has Failed this year.\n", name, age);
    }

    // Free dynamically allocated memory
    free(name);
}

int main() {
    printf("Hello and Welcome to the school_system program!\n\n");
    school_system();
    return 0;
}
