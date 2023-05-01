#include "stdio.h"

/**
  *main - main entry point
  *@argc: operation parameter
  *@argv: operation parameter
  *Return: always 0
  */

int main(int argc, char *argv[])
{
	int args;

	args = argc - 1;
	printf("%d\n", args);

	if (args < 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
