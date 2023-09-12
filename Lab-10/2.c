#include <stdio.h>

// Recursive function to generate the nth Fibonacci term
int FIB(int n) {
    if (n <= 1) {
        return n; // Base case: F(0) = 0, F(1) = 1
    } else {
        return FIB(n - 1) + FIB(n - 2); // Recursive call for F(n) = F(n-1) + F(n-2)
    }
}

int main() {
    int N;

    // Prompt the user to enter the number of Fibonacci terms to generate
    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    printf("First %d Fibonacci terms:\n", N);

    // Generate and print the first N Fibonacci terms
    for (int i = 0; i < N; i++) {
        int term = FIB(i);
        printf("%d ", term);
    }

    printf("\n");

    return 0;
}
