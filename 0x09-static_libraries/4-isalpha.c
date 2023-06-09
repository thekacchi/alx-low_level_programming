#include "main.h"

/**
  * _isalpha - function deyects alphabets
  *
  * @c: parameter to be printed
  *
  * Return: 1 if lowercase
  *
  * and 0 otherwise
  */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
