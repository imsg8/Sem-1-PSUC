#include <stdio.h>

int main() {
    int a = 30, b = 10, c = 5, d = 15;
    int result1, result2, result3, result4;

    // Evaluate the expressions
    result1 = (a + b) * c / d;
    result2 = ((a + b) * c) / d;
    result3 = a + (b * c) / d;
    result4 = (a + b) * (c / d);

    // Display the results
    printf("(i)   (a + b) * c / d = %d\n", result1);
    printf("(ii)  ((a + b) * c) / d = %d\n", result2);
    printf("(iii) a + (b * c) / d = %d\n", result3);
    printf("(iv)  (a + b) * (c / d) = %d\n", result4);

    return 0;
}
