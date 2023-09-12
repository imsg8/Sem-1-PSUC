#include <stdio.h>

int main() {
    char password[100];
    char c;
    int i = 0;

    printf("Enter your password: ");

    // Read the password character by character and mask with '*'
    while (1) {
        c = getchar(); // Read a character from standard input

        if (c == '\n' || c == '\r' || i >= sizeof(password) - 1) {
            break; // Stop reading when Enter is pressed or buffer is full
        } else {
            printf("*"); // Mask the character with '*'
            password[i++] = c;
        }
    }

    password[i] = '\0'; // Null-terminate the password string

    printf("\nYour password is: %s\n", password);

    return 0;
}
