#include <stdio.h>
#include "main.h"

/**
 * _isdigit - chceks whether c is a digit
 * @c: parameter to be chceked
 * Return: 1 is c is a digit and 0 if its not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
