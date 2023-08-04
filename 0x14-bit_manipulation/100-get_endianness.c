#include "main.h"

/**
 * get_endianness - checks if machine is big or small endian
 * Return: 0 for big,1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
