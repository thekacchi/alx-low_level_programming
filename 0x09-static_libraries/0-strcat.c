#include "main.h"
#include <stdio.h>


/**
  * _strcat- function concatenates strings
  * @dest: parameter to be operated on
  * @src: paraleter to be operated on
  * Return: always 0
  */

char *_strcat(char *dest, char *src)
{
	int f = 0;
	int e;

	while (dest[f])
	{
		f++;
	}

	for (e = 0 ; src[e] != 0 ; e++)
	{
		dest[f] = src[e];
		f++;
	}


	dest[f] = '\0';
	return (dest);
}
