#include "main.h"
#include <stdio.h>

/**
 * _strcmp - copies at most an inputted number
 * @dest: buffer to store the copy of string
 * @src: source strinng
 * @n: max number of bytes copied from src
 * Return: pointer to dest
 */

int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 != *s2) {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
