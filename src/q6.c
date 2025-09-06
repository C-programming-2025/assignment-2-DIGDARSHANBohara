// Write a C program that prompts the user for a number and prints its multiplication table up to 10 using a do-while loop.
#include <stdio.h>
int main() {
     int a;
     int i=1;
     int M;
     
     printf("enter a number");
     scanf("%d", &a);
     do {
       M = a * i; 
        printf("%d x %d = %d\n", a, i, M); 
        i++;


     } while ( i <= 10);
      








      return 0;
}