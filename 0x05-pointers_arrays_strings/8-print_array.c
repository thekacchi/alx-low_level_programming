#include "main.h"
#include <stdio.h>
/**
  * print_array - prints an array
  *
  * @a: parameter to be operated
  * @n: parameter to be operated
  * Return: always 0
  */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(", ");
	}
	}
	printf("\n");
}
