#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first nunber
 * @m: second nunber
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int temp;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		temp = exclusive >> i;
		if (temp & 1)
			count++;
	}

	return (count);
}
