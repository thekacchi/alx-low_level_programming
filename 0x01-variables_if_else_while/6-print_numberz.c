#include <stdio.h>
/**
  *main - Entry point
  *Description : Prints alphabets a-z and newline
  *Return: always 0
  */
int main(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
