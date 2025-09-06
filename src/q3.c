// Write a C program that calculates the absolute value of a given number without using the built-in absolute value function.
#3
#include <stdio.h>

int main() {
    int a;
    printf("eneter a numebr");
    scanf("%d", &a);
    if (a<0){
        int b = (a*(-1));
        printf("%d",b);


    } else{
        printf("%d", a);
    }



    return 0;
}