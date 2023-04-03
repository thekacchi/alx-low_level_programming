#include "main.h"

/**
  *_memset - function
  *@s: parameter to be operated
  *@b: parameter to be operated
  *@n: parameter to be operated
  *Return: Always 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n ; x++)
		s[x] = b;
	return (s);
}
