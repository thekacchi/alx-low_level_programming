#include <stdio.h>
#include "main.h"

/**
  *rcstr -returns string length
  *@S: string parameter
  *Return : length of the string
  */

int rcstr(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + rcstr(s + 1));
}

/**
  *comparator - compares the string character
  *@s: string
  *@x1: smallest iterator
  *@x2: biggest iterator
  *Return: well, whatever
  */

int comparator(char *s, int x1, int x2)
{
	if (*(s + x1) == *(s + x2))
	{
		if (x1 == x2 || x1 == x2 + 1)
			return (1);
	}
	return (0);
}

/**
  *is_palindrome -detects a palindrome
  *@s: string
  *Return: 1 if palindrome, otherwise 0
  */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, rcstr(s) -1));
}
