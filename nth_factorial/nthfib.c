#include <stdio.h>
#include <stdlib.h>

int fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[])
{
    int n = atoi(argv[1]);
    printf("entered nth number%d\n ", n);
    printf("F(n) = %d", fib(n));

    return 0;
}