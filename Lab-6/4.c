#include <stdio.h>

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

    // Interchange the primary and secondary diagonal elements
    for (int i = 0; i < n; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - 1 - i];
        matrix[i][n - 1 - i] = temp;
    }

    // Display the matrix after interchanging diagonals
    printf("Matrix after interchanging diagonals:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
