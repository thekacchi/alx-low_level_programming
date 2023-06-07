#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - main entry point.
 * @s: parameter to be worked on.
 * Return - always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}
