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

    r = wildcmp(main.c, *.c);
    printf(%dn, r);
    r = wildcmp(main.c, m*a*i*n*.*c*);
    printf(%dn, r);
    r = wildcmp(main.c, main.c);
    printf(%dn, r);
    r = wildcmp(main.c, m*c);
    printf(%dn, r);
    r = wildcmp(main.c, ma********************************c);
    printf(%dn, r);
    r = wildcmp(main.c, *);
    printf(%dn, r);
    r = wildcmp(main.c, ***);
    printf(%dn, r);
    r = wildcmp(main.c, m.*c);
    printf(%dn, r);
    r = wildcmp(main.c, **.*c);
    printf(%dn, r);
    r = wildcmp(main-main.c, ma*in.c);
    printf(%dn, r);
    r = wildcmp(main, main*d);
    printf(%dn, r);
    r = wildcmp(abc, *b);
    printf(%dn, r);
    return (0);
}
