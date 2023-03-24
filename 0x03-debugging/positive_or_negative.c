#include "main.h"

/**
 * posititve_or_negative - checjs if a number is plus or minus
 * @i: number to be checked
 * Return: always 0
 */

void posititve_or_negative(int i)
{
	if (i < 0)
		printf ("%d is negative", i);
	else
		printf ("%d is positive", i);
}
