#include <stdio.h>

// Function to calculate the factorial of a number
double Fact(int n) {
    if (n == 0 || n == 1) {
        return 1.0; // Base case: 0! and 1! are both 1
    } else {
        double result = 1.0;
        for (int i = 2; i <= n; i++) {
            result *= (double)i;
        }
        return result;
    }
}

int main() {
    int n, r;

    // Prompt the user to enter values for n and r
    printf("Enter the values of n and r (nCr): ");
    scanf("%d %d", &n, &r);

    if (n < 0 || r < 0 || r > n) {
        printf("Invalid input. Make sure n is non-negative and r is non-negative and not greater than n.\n");
    } else {
        // Calculate nCr using the Fact function
        double nCr = Fact(n) / (Fact(r) * Fact(n - r));

        printf("%dC%d (nCr) is: %.2lf\n", n, r, nCr);
    }

    return 0;
}
