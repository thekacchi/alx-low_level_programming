#include <stdio.h>
#include <string.h>

/**
  *_print_rev_recursion - main entry point
  *@s: parameter to be operted on
  *return: always 0
  */

void _print_rev_recursion(char *s)
{
	int lenghtt, i;

	lenghtt = strlen(s);
	for (i = lenghtt - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
