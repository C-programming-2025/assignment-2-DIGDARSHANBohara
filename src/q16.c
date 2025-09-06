// Write a C program that calculates the factorial of a given number using a do-while loop.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    i = n;
    do {
        if (i > 0) {
            factorial *= i;
        }
        i--;
    } while (i > 0);

    printf("Factorial of %d = %llu\n", n, factorial);

    return 0;
}

 