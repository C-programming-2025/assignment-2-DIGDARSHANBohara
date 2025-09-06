// Write a C program that prompts the user for a positive integer and prints the
// multiplication table for that number up to 10 using a while loop.
#include <stdio.h>

int main() {
    int a, i=1,M;
    printf("Enter a positive number");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Not a positive number.\n");
        return 0;
    }
    while (i <=10)
    
    {
        M = a * i; 
        printf("%d x %d = %d\n", a, i, M); 
        i++;
    }
    return 0;
}