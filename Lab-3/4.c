#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are neither prime nor composite
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
    int number, primeCount = 0, compositeCount = 0;

    do {
        // Prompt the user to enter a number
        printf("Enter a number (or -1 to exit): ");
        scanf("%d", &number);

        if (number == -1) {
            break; // Exit the loop if -1 is encountered
        }

        if (isPrime(number)) {
            primeCount++;
        } else {
            compositeCount++;
        }

    } while (1);

    printf("Total prime numbers entered: %d\n", primeCount);
    printf("Total composite numbers entered: %d\n", compositeCount);

    return 0;
}
