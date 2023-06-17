#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _len(char *str);
char *_xarray(int size);
char *it_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
 * _len - finds the length of string
 * @str: string to be checekd
 * Return: length of the string
 */

int _len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _xarray - creates array of chars and
 * initializes with 'x' and adds remaining bytes
 * @size: soze of areay to be initialized
 * desc: without enough space, func exits with 98
 * Return: a pointer to the array
 */

char *_xarray(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * it_zeroes - iterates thru string of numbers till it hits
 * a non-zero number
 * @str: the string of numbers to be iterated
 * Return: pointer to the non-zero element
 */

char *it_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - convert digit character to corresponding int
 * @c: character to be converted
 * desc: if c is non digit, it exots woth 98
 * Return: the converted int
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * get_prod - Multiplies a string of numbers with a single digit
 * @prod: a buffer to store the result
 * @mult: a string of numbers
 * @digit: a single digit
 * @zeroes: the nevessary number of leading zeroes
 *
 * desc: if mult contains non-digit, exit with status 98
 * Return: always 0
 */

void get_prod(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = _len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * add_nums - Adds the number stored in two strings
 * @final_prod: Buffer storing final product
 * next_prod: next product to be added
 * @next_len: len: length of next product
 */
void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x' ; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numvers
 * @argv: number of args passed to program
 * @argc: array of pointers to arguements
 * desc: func exist with status 98 if nimber of args
 *  is incorrect one one number has non-digits
 *  Return: always 0
 */
int main(int argc, char *argv[])
{
	char *final_prod, *next_prod;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = it_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = it_zeroes(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = _len(argv[1]) + _len(argv[2]);
	final_prod = _xarray(size + 1);
	next_prod = _xarray(size + 1);

	for (index = _len(argv[2]) - 1; index >= 0 ; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_prod, argv[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (index = 0; final_prod[index]; index++)
	{
		if (final_prod[index] != 'x')
			putchar(final_prod[index]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
