#include <stdio.h>
/**
  *main - Entry point
  *Description : Prints alphabets a-z and newline
  *Return: always 0
  */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; c++)
	{
		if (c == 'e' || c == 'q')
		{
			continue;
		}
		putchar(c);
	}
	putchar('\n');
	return (0);
}
