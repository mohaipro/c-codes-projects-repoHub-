#include <stdio.h>

int main() {
    int ID;
    char choice;

    printf("=== Welcome to the Secure Access System ===\n");

    do {
        printf("\nPlease enter your ID number: ");
        scanf("%d", &ID);

        // Switch-case to match ID
        switch (ID) {
            case 1234:
                printf("Access Granted: Hello Mohamed!\n");
                break;
            case 1222:
                printf("Access Granted: Hello Salma!\n");
                break;
            case 9654:
                printf("Access Granted: Hello David!\n");
                break;
            case 1111:
                printf("Access Granted: Hello Sarah!\n");
                break;
            case 2222:
                printf("Access Granted: Hello John!\n");
                break;
            case 3333:
                printf("Access Granted: Hello Lina!\n");
                break;
            default:
                printf("Access Denied: Unknown USER!\n");
        }

        // Ask if user wants to try again
        printf("\nDo you want to enter another ID? (Y/N): ");
        scanf(" %c", &choice);  // Note: space before %c to consume newline

    } while (choice == 'Y' || choice == 'y');

    printf("\nThank you for using the system. Goodbye!\n");
    return 0;
}
