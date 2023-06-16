#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _len(char *str);
char *_xarray(int size);
char *it_zeroes(char *str);
void get_prod(char *prod, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next _len);

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

	array = malloc(sizeof (char) * size);

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

char it_zeroes(char *str)
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

void get_prod(char *prod, char mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = find_len = find_len(mult) - 1;
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
		if (*mult < '0' || mult > '9')
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
