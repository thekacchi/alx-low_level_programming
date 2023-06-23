#include <stdio.h>
#include "main.h"

int comparator(char *s, int i, int len);
int rcstr(char *s);

/**
 * rcstr - returns string length
 * @s: string parameter
 * Return: length of the string
 */

int rcstr(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + rcstr(s + 1));
}

/**
 * comparator - compares string character
 * @s: string to be operated
 * @i: smallest iteratoer
 * @len: largest iterator
 * Return: irrelevant
 */

int comparator(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (comparator(s, i + 1, len - 1));
}

/**
 * is_palindrome - detects a palindrome
 * @s: string
 * Return: 1 if palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (comparator(s, 0, rcstr(s)));
}
