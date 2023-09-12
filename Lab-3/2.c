#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }

    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If num is divisible by any number between 2 and sqrt(num), it's not prime
        }
    }

    return 1; // If no divisors were found, num is prime
}

int main() {
    int lowerLimit, upperLimit;

    // Prompt the user to enter the lower and upper limits
    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    if (lowerLimit >= 2) {
        printf("Prime numbers between %d and %d are:\n", lowerLimit, upperLimit);

        int num = lowerLimit;
        while (num <= upperLimit) {
            if (isPrime(num)) {
                printf("%d ", num);
            }
            num++;
        }

        printf("\n");
    } else {
        printf("Prime numbers start from 2. Please enter a valid lower limit.\n");
    }

    return 0;
}
