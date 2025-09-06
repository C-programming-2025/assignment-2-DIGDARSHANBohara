// Write a C program that prompts the user for a positive integer and calculates the factorial of that number using a while loop.
#include<stdio.h>
int main() {
    int a;
     int factorial = 1; 
    printf("enter a number");
    scanf("%d", &a);
      int i = a;
    while (i > 0) {
        factorial *= i;
        i--;
    }
        printf("Factorial of %d = %d\n", a, factorial);


return 0;
}
