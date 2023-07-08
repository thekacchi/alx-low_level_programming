#include "main.h"

/**
 * clear_bit - sets bit at given index to 0
 * @n: pointer to number to be changed
 * @index: index of the bit to set to 1
 * Return: 1 for success, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) | *n);
	return (1);
}
