#include "main.h"

/**
  *_memcpy - main function entry point
  *_memcpy - copies from memory area to memory area
  *@dest: parameter to be operated
  *@src: parameter to be operated on
  *@n: parameter to be operated
  *Return: always 0
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}
