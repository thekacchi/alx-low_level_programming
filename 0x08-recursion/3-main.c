#include main.h
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = factorial(1);
    printf(%dn, r);
    r = factorial(5);
    printf(%dn, r);
    r = factorial(10);
    printf(%dn, r);
    r = factorial(-1024);
    printf(%dn, r);
    return (0);
}
