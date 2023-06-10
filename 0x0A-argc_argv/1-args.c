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
	int n;

	n = argc - 1;
	(void)argv;
	printf("%d\n", n);
	return (0);
}
