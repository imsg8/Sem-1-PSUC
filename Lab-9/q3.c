#include <stdio.h>

int findMax(int *arr, int size) {
    int max = *arr;

    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }

    return max;
}

int main() {
    int arr[] = {3, 8, 2, 10, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum number in the array: %d\n", findMax(arr, size));

    return 0;
}
