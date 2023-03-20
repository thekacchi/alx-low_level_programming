#include <stdio.h>
/**
  *main - Entry point
  *Description : Prints alphabets a-z and newline
  *Return: always 0
  */
int main(void)
{
	int c;

	for (c = 48 ; c <= 57 ; c++)
	{
		putchar(c);
		if (c == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
