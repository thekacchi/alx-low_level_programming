#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares pointers to strings
 * @s1: points to first string to be compared
 * @s2: points to second string to be compared
 * Return: solution
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
