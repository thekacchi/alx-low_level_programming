#include <stdio.h>
#include <string.h>

/** 
  *_print_rev_recursion - main entry point
  *@s: parameter to be operted on
  *return: always 0
  */

void _print_rev_recursion(char *s)
{
	char x;

	x = strrev(s);
	printf("%s\n", x);
}
