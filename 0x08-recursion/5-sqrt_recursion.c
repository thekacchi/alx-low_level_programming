#include <stdio.h>
#include "main.h"

/**
  *_sqrt_recursion- main entry point
  *@n : parameter to be operated
  *@x: parameter to be iterated
  *Return: the squuare root
  */

int _sqrt(int n, int x);


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  *_sqrt - main entry point
  *@n: number to find square root
  *@x: for iteration
  *Return: square root
  */

int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (x);

	return (_sqrt(n, x + 1));
}
