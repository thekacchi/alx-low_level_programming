#include <stdio.h>
#include "main.h"

/**
  *is_prime_number - main entry point
  *@n: parameter to be chacked
  *@x: to be iterated
  *Return: the integer value
  */

int primte_no(int n, int x);

int is_prime_number(int n)
{
	return (primte_no(n, 1));
}

/**
  *primte_no - checks for prime number
  *@n: number to be checked
  *@x: iteration
  *Return: 1 for prime and 0 for composite number
  */

int primte_no(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1)
		return (0);

	if ((n / x) < x)
		return (1);

	return (primte_no(n, x + 1));
}
