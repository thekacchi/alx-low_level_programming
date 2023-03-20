#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main- Entry point
  *Description: if last digit is negative, zero or positive
  *Return: always 0
  */
int main(void)
{
	int n;
	int fd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	fd = n % 10;
	if (fd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, fd);
	}
	else if (fd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, fd);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, fd);
	}
	return (0);
}
