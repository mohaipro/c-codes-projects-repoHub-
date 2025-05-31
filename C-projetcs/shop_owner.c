#include <stdio.h>

// Calculates profit or loss based on cost and selling price.
// Returns positive value for profit, negative for loss, zero for neither.
float calculate_profit_or_loss(float cost_price, float selling_price) {
    float result = selling_price - cost_price;
    if (result < 0) {
        printf("There is a loss here!\n");
    } else if (result == 0) {
        printf("There is neither loss nor profit here.\n");
    } else {
        printf("There is a profit here!\n");
    }
    return result;
}

// Collects shop owner info, gets prices, and displays profit/loss message.
void shop_owner(void) {
    char fname[20];
    char lname[20];
    float cost, selling;

    printf("Hello and welcome to the shop:\n");
    printf("Enter your first name: ");
    scanf("%19s", fname);
    printf("Enter your last name: ");
    scanf("%19s", lname);

    // Input validation for prices
    printf("Enter the cost price: ");
    scanf("%f", &cost);
    printf("Enter the selling price: ");
    scanf("%f", &selling);

    float out = calculate_profit_or_loss(cost, selling);

    // Personalized message based on result
    if (out > 0) {
        printf("Hello Mr/Ms %s %s, you made a profit of $%.2f today.\n", fname, lname, out);
    } else if (out == 0) {
        printf("Hello Mr/Ms %s %s, you did not make a profit or loss today.\n", fname, lname);
    } else {
        printf("Hello Mr/Ms %s %s, you made a loss of $%.2f today.\n", fname, lname, -out);
    }
}

int main(void) {
    // Start the shop owner program
    shop_owner();
}
