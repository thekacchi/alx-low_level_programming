#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * wildcmp - main entry point
 * @s1: hughest iteration
 * @s2: lowest iteration
 * Return: depends
 */

int wildcmp(char *s1, char *s2)
{
	if (strlen(*s1) == strlen(*s2))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}

