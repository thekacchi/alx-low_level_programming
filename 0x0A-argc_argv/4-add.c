#include "stdio.h"
#include "stdlib.h"

/**
  *main - main entry point
  *@argc: operation parameter
  *@argv: operation parameter
  *Return: always 0
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
	for (i = 1 ; 1 < argc ; i++)
	{
		sum += atoi(argv[i]);
				printf("%d\n", sum);
				return (0);
	}
	}

	return (0);
}
