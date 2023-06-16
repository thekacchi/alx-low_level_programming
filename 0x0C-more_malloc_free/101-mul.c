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


