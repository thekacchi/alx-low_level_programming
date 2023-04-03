#include "main.h"

/**
  *_mencpy - main function
  *@dest: parameter to be operated
  *@src: parameter to be operated on
  *@n: parameter to be operated
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
		dest[x] = src[x];
	return (dest);
}
