#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //int n = 1;
    long long n = 1;
    //while(true)
    for (int i = 0; i < 64; i++)
    {
        printf("n is %lld\n", n);
        n = n * 2;
    }
}