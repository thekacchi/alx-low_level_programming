#include <stdio.h>
/**
  *main - Entry point
  *Description : Prints alphabets a-z and newline
  *Return: always 0
  */
int main(void)
{
	char c;
	int d;
	
	for (d = 0 ; d <= 9 ; d++)
	{
		putchar(d + 48);
	}
	for (c = 'a' ; c <= 'f' ; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
