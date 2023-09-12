#include <stdio.h>

int main() {
    double num1, num2;
    double sum, difference, product, quotient;

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Calculate the difference
    difference = num1 - num2;

    // Calculate the product
    product = num1 * num2;

    // Check if the second number is not zero to avoid division by zero
    if (num2 != 0) {
        // Calculate the quotient
        quotient = num1 / num2;

        // Display the quotient
        printf("The quotient of %.2lf and %.2lf is %.2lf\n", num1, num2, quotient);
    } else {
        printf("Cannot divide by zero\n");
    }

    // Display the sum, difference, and product
    printf("The sum of %.2lf and %.2lf is %.2lf\n", num1, num2, sum);
    printf("The difference of %.2lf and %.2lf is %.2lf\n", num1, num2, difference);
    printf("The product of %.2lf and %.2lf is %.2lf\n", num1, num2, product);

    return 0;
}
