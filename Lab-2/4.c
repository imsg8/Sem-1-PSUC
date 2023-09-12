#include <stdio.h>

int main() {
    int num1, num2, num3, smallest;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Use the conditional operator to find the smallest number
    smallest = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Display the smallest number
    printf("The smallest number is: %d\n", smallest);

    return 0;
}
