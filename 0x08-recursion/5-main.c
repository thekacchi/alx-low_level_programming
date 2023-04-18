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

    r = _sqrt_recursion(1);
    printf(%dn, r);
    r = _sqrt_recursion(1024);
    printf(%dn, r);
    r = _sqrt_recursion(16);
    printf(%dn, r);
    r = _sqrt_recursion(17);
    printf(%dn, r);
    r = _sqrt_recursion(25);
    printf(%dn, r);
    r = _sqrt_recursion(-1);
    printf(%dn, r);
    return (0);
}
