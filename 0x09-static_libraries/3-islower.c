#include "main.h"

/**
 * _islower - funtion identifies lower case
 * @c: parameter to be printed
 * Description - identifies characters
 * Return: 1 is lowercase and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
