#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 * description - Same as above
 * Return: Always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
