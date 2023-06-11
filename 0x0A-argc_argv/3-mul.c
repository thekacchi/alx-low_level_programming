#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arguement count
 * @argv: arguement vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;

		printf("%d\n", c);
		return (0);
	}
}
