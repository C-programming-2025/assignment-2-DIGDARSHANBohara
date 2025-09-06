/* Write a C program that takes an integer input from the user and determines if it is positive, negative, or zero.
Expected Output:
If n > 0, print Positive (case-insensitive, extra messages allowed).
If n < 0, print Negative (case-insensitive, extra messages allowed).
If n == 0, print Zero (case-insensitive, extra messages allowed).
*/
#1
#include<stdio.h>
int main() {
    int a;
    printf("Enter a interger\n");
    scanf("%d", &a);
    if (a > 0){
        printf("positive\n");
    } else if (a < 0){
        printf("negative\n");
    }else { 
        printf("zero\n");
        return 0;
}



    
    