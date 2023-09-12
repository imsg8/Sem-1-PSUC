#include <stdio.h>

int main() {
    /* This program uses the %zu format specifier to print the size of each data
    type in bytes. When you run this program, it will display the size of each
    data type on your system. The sizes may vary depending on the platform and
    compiler you are using. */
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}
