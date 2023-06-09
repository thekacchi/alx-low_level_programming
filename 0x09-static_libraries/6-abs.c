#include "main.h"
#include "stdlib.h"

/**
  * _abs - checks for absolute value
  *
  * @f: parameter to be checked
  *
  *Return: always f
  */

int _abs(int f)
{
	if (f < 0)
		f = -(f);
	else
		f = f;
	return (f);
}
