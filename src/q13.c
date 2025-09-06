// Write a C program that calculates the sum of all even numbers from 1 to 50 using a while loop.
#include <stdio.h>
int main() {
    int i=1;
    int n=0;
    while (i<=50)
    {
        if (i % 2 ==0 ) {
            n+= i;


        }
        i++;
    }
    printf("sum od 50 number is %d\n",n );
    


    return 0;

}
