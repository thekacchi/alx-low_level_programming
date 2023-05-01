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
	int mul;
	int args = argc -1;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (args == 2)
	{
		mul = a * b;
			printf("%d\n", mul);
			return (0);
	}

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
