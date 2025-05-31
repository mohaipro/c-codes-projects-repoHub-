#include <stdio.h>

// Calculates base raised to the power of exponent (base^exponent).
// Only works for non-negative exponents.
int power(int base, int exponent) {
    int product = 1;
    // Multiply product by base, exponent times
    for (int i = 0; i < exponent; i++) {
        product *= base;
    }
    return product;
}

int main(void) {
    int x, y;
    printf("Enter the number (base): ");
    scanf("%d", &x);
    printf("Enter the number (exponent): ");
    scanf("%d", &y);

    // Check for negative exponent
    if (y < 0) {
        printf("Negative exponents are not supported in this program.\n");
        return 1;
    }

    int p = power(x, y);
    printf("%d^%d = %d\n", x, y, p);
}
