#include "stdio.h"

/**
  *main - main entry point
  *@argc: operation parameter
  *@argv: operation parameter
  *Return: always 0
  */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[(argc - 1)]);
	return (0);
}
