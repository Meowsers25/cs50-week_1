#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x is ");
    int x = get_int();

    printf("y is ");
    int y = get_int();

    //int z = x + y;

    //printf("The sum of x and y is %i\n", x + y);
    printf("%i plus %i is %i\n", x, y, x + y);
    printf("%i minus %i is %i\n", x, y, x - y);
    printf("%i times %i is %i\n", x, y, x * y);
    printf("%i divided %i is %i\n", x, y, x / y);
    printf("The remainder of %i divided %i is %i\n", x, y, x % y);


}