#include "main.h"

/**
 * get_bit - returns value of bit at an index in decimal number
 * @n: num to search
 * @index: index of bit
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_;

	if (index > 63)
		return (-1);

	bit_ = (n >> index) & 1;

	return (bit_);
}
