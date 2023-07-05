#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies at most an inputted number
 * @dest: buffer to store the copy of string
 * @src: source strinng
 * @n: max number of bytes copied from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
