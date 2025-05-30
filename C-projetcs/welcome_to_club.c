#include <stdio.h>

/*
 * Function: get_name
 * ------------------
 *   Reads a name from the user and stores it in the provided array.
 *
 *   name: The array to store the user's name.
 */
void get_name(char name[], int size) {
    // passing the array to function (by reference)
    printf("Enter your name: ");
    scanf("%9s", name); // Limit input to avoid overflow
}

/*
 * Function: get_age
 * -----------------
 *   Reads the user's age.
 *
 *   returns: The age entered by the user.
 */
int get_age(void) {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    return age;
}

/*
 * Function: enter_club
 * --------------------
 *   Checks if the user is allowed to enter the club (age >= 21).
 *
 *   age: The user's age.
 *
 *   returns: 1 if allowed, 0 otherwise.
 */
int enter_club(int age) {
    if (age >= 21) {
        return 1;
    } else {
        return 0;
    }
}

int main(void) {
    char name[10];
    printf("Hello and welcome to The CLUB!\n");
    printf("<<<I am the security guy here>>>\n");

    get_name(name, 10);
    int age = get_age();

    printf("Your name is %s and you are %d years old\n", name, age);

    int allowed = enter_club(age);
    if (allowed == 1)
        printf("Welcome to the CLUB!\n");
    else
        printf("Sorry but I can't let you in\n");

    // Example test cases:
    // Input: name = "Ali", age = 22 -> Output: Welcome to the CLUB!
    // Input: name = "Sara", age = 18 -> Output: Sorry but I can't let you in

    return 0;
}
