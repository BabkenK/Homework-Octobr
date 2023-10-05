#include <stdio.h>

int main() {
    double arr[] = {999, 2, 3.4, 17.5, 50}; // double arr[5] = {999, 2, 3.4, 17.5, 50}
    double *ptr;
    int i;

    ptr = arr; 

    int length = sizeof(arr) / sizeof(arr[0]); 

    printf("Array values using pointer:\n");

    for (i = 0; i < length; i++) { // for (i = 0; i < 5; i++)
        printf("%lf\n", *ptr); 
        ptr = ptr + 1; 
    }

    return 0;
}