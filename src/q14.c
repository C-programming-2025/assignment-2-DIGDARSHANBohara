// Write a C program that prompts the user for a positive integer and prints all the factors of that number using a for loop.
#include <stdio.h>

int main() {
    int a, i;
    printf("Enter a positive number");
    scanf("%d", &a);
    if (a <= 0){
        printf("not a positive number");
        return 0;
   }
    for ( i = 1; i <= a; i++)
    {
        if (a % i == 0 ){
            printf("%d ",i);

        }

    }
    printf("\n");
    return 0;
}