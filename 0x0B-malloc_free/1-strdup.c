#include "main.h"
#include <stdlib.h>

/**
 * _strdup - main entry point
 * @str: operation parameter
 * Return: returns s or NULL
 */

char *_strdup(char *str)
{
	int x = 0, i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (x < i)
	{
		s[x] = str[x];
		x++;
	}

	s[x] = '\0';
	return (s);
}
