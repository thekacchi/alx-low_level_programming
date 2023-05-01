#include "stdio.h"

/**
  *main - main entry point
  *@argc: operation parameter
  *@argv: operation parameter
  *Return: always 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
