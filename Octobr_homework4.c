#include <stdio.h>

int main() {
    int x;
    int y;
    int *p;
    int *q;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    p = &x;

    printf("The value of x is: %d\n", *p);

    q = &y;
    printf("The value of y is: %d\n", *q);

    int addition = *p + *q; // Addition using pointers
    int subtraction = *p - *q; // Subtraction using pointers
    int multiplication = *p * *q; // Multiplication using pointers
    int division = *p / *q; // Division using pointers

    printf("Addition: %d\n", addition);
    printf("Subtraction: %d\n", subtraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division: %d\n", division);

    return 0;
}

