#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if a letter is upper case or not
 * @c: parameter to be examined
 * Return: 1 for Upper case, 0 for lower case
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
