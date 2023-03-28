#include "main.h"

/**
  * swap_int - swaps integers
  * @a: parameter to be worked on
  * @b: parameter to be worked on
  *Return: always 0
  */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
