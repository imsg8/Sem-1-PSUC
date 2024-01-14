#include <stdio.h>
int FIB(int n) {
    if (n <= 1) {
        return n;
    } else {
        return FIB(n - 1) + FIB(n - 2);
    }
}

int main() {
    int N;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &N);
  
    printf("Fibonacci series: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", FIB(i));
    }

    return 0;
}
