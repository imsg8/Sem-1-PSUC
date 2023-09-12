#include <stdio.h>

// Function to find the maximum of a list of numbers
int Largest(int arr[], int n) {
    if (n <= 0) {
        return -1; // Return -1 for an empty list
    }

    int max = arr[0]; // Assume the first number is the maximum

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger number is found
        }
    }

    return max;
}

int main() {
    int N;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1; // Exit with an error code
    }

    int numbers[N];

    // Prompt the user to enter the elements
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    int largest = Largest(numbers, N);

    if (largest != -1) {
        printf("The largest number among the entered numbers is: %d\n", largest);
    } else {
        printf("The list is empty, so there is no largest number.\n");
    }

    return 0;
}
