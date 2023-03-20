#include <stdio.h>
/**
  *main - Entry point
  *Description : Prints alphabets a-z and newline
  *Return: always 0
  */
int main(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	{
		putchar(c + 48);
	}
	putchar('\n');
	return (0);
}
