#include <stdio.h>
#include <stdlib.h>

int is_digit(char x)
{
	return (x >= '0' && x <= '9');
}

int add_positive(int argc, char *argv[])
{
	int res = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv [i][j] != '0'; j++)
		{
			if (!is_digit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[i]);
	}
	printf("%d\n", res);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		return(add_positive(argc, argv));
	}
		else
		{
		printf("0\n");
		return (0);
		}
}
