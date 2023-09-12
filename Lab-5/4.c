#include <stdio.h>

int main() {
    int n, searchNumber;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Declare an array of size 'n'
    int arr[n];

    // Prompt the user to enter the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Prompt the user to enter the number to be searched and deleted
    printf("Enter the number to be searched and deleted: ");
    scanf("%d", &searchNumber);

    int found = 0; // Flag to indicate if the number was found
    int newSize = n; // Initialize the new size of the array

    // Search for the number in the array
    for (int i = 0; i < newSize; i++) {
        if (arr[i] == searchNumber) {
            found = 1;
            // Delete the number by shifting the remaining elements
            for (int j = i; j < newSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            newSize--; // Decrease the size of the array
            i--; // Recheck the current index as it now contains the next element
        }
    }

    if (found) {
        // Display the modified array after deleting the number
        printf("Modified array after deleting %d:\n", searchNumber);
        for (int i = 0; i < newSize; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("%d not found in the array.\n", searchNumber);
    }

    return 0;
}
