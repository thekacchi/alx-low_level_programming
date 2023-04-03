#include "main.h"
#include <stdio.h>

/**
 *_strchr - maion entry point
  *@s: parameter to be operated
  *@c: parameter to be operated
  *Return: always 0
  */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0 ; s[x] >= '\0' ; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
