#include <stdio.h>
#include "main.h"

/**
  *_strstr - main entey point
  *@haystack: parameter to be operated on
  *@needle: parameter to be operated on
  *Return: always 0
  */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0' ; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
