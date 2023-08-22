#include "main.h"

/**
  *_strspn - main entry point
  *@s: parameter to be opearated
  *@accept: parameter to be operated
  *Return: always 0
  */
unsigned int _strspn(char *s, char *accept)
{

  unsigned int count = 0;
    int found;

    while (*s)
    {
        found = 0;
        for (char *a = accept; *a; a++)
        {
            if (*s == *a)
            {
                found = 1;
                break;
            }
        }
        if (!found)
            break;
        count++;
        s++;
    }
    return count;
}
