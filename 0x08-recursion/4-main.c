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

    r = _pow_recursion(1, 10);
    printf(%dn, r);
    r = _pow_recursion(1024, 0);
    printf(%dn, r);
    r = _pow_recursion(2, 16);
    printf(%dn, r);
    r = _pow_recursion(5, 2);
    printf(%dn, r);
    r = _pow_recursion(5, -2);
    printf(%dn, r);
    r = _pow_recursion(-5, 3);
    printf(%dn, r);
    return (0);
}

