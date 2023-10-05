#include <stdio.h>

/*int main() 
{
    int x = 42;

    int*a;

    a = &x;
    printf("&x == %p \n", &x);
    printf("&a == %p \n", &a);
    return 0;
}*/
    

#include <stdio.h>

int main() {
    int x = 42; 
    int *p; 

    p = &x; 

    printf("The value of x is: %d\n", *p);

}

