#include <stdio.h>
#include <math.h>

int main() {
    int n;

    // Prompt the user to enter the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Declare a 2D array to store the square matrix
    int matrix[n][n];

    // Prompt the user to enter matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the trace of the matrix (sum of diagonal elements)
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    // Calculate the norm (Frobenius norm) of the matrix
    double norm = 0.0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            norm += pow(matrix[i][j], 2);
        }
    }
    norm = sqrt(norm);

    // Display the trace and norm of the matrix
    printf("Trace of the matrix: %d\n", trace);
    printf("Norm of the matrix: %.2lf\n", norm);

    return 0;
}
