#include <stdio.h>

// Function to calculate the sum of the four corners of a matrix
int CornerSum(int rows, int cols, int matrix[rows][cols]) {
    if (rows < 2 || cols < 2) {
        return 0; // The matrix is too small to have four corners
    }

    int sum = 0;

    // Sum the four corners
    sum += matrix[0][0];                 // Top-left corner
    sum += matrix[0][cols - 1];          // Top-right corner
    sum += matrix[rows - 1][0];          // Bottom-left corner
    sum += matrix[rows - 1][cols - 1];   // Bottom-right corner

    return sum;
}

int main() {
    int rows, cols;

    // Prompt the user to enter the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1; // Exit with an error code
    }

    // Declare a matrix with the specified number of rows and columns
    int matrix[rows][cols];

    // Prompt the user to enter matrix elements
    printf("Enter the matrix elements row by row:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the four corners using the CornerSum function
    int sum = CornerSum(rows, cols, matrix);

    if (sum == 0) {
        printf("The matrix is too small to have four corners.\n");
    } else {
        printf("Sum of the four corners: %d\n", sum);
    }

    return 0;
}
