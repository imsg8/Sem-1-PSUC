#include <stdio.h>

int main() {
    char str[100];
    int charCount = 0, digitCount = 0, digitSum = 0;

    // Prompt the user to enter an alphanumeric string
    printf("Enter an alphanumeric string: ");
    scanf("%s", str);

    // Iterate through the string to count characters and digits
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            charCount++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digitCount++;
            digitSum += str[i] - '0'; // Convert the character to an integer and add to the sum
        }
    }

    // Display the results
    printf("Number of characters: %d\n", charCount);
    printf("Number of digits: %d\n", digitCount);
    printf("Sum of digits: %d\n", digitSum);

    return 0;
}
