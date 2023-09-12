#include <stdio.h>

int main() {
    int a, b, sum;

    // Prompt the user to enter the first integer
    printf("Enter the first integer: ");
    scanf("%d", &a);

    // Prompt the user to enter the second integer
    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Calculate the sum of a and b
    sum = a + b;

    // Display the result
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}