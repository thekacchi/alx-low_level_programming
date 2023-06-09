#include <stdio.h>
#include "main.h"

/**
 * _strncat - main entry point
 * @dest: string to be operated
 * @src: string to he operated
 * @n: number of bytes
 * Return: pointer to the result
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
