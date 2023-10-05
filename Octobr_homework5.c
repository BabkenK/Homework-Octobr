#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int x;
    int y;
    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);
    
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}
    