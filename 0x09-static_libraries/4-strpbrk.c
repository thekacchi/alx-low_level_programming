#include "main.h"
#include <stdio.h>

/**
  *_strpbrk - main entey point
  *@s: parameter to be operated
  *@accept: parameter to be operated
  *Return: Always 0
  */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (n = 0 ; accept[n] != '\0' ; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
