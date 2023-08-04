#include "main.h"

/**
 * get_bit - return balue of a bit at an in dec
 * @n: number to search
 * @index: index of bit
 * Return: Value of but
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_;

	if (index > 63)
		return (-1);

	bit_ = (n >> index) & 1;

	return (bit_);
}
