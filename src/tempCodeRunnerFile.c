#include <stdio.h>

int main() {
    int a, i;
    printf("Enter a positive number");
    scanf("%d", &a);
    if (a <= 0) {
        printf("Not a positive number.\n");
        return 0;
    }

    for (i = a; i>= 1; i--){
        printf("%d\n",i);

    }
    return 0;
}