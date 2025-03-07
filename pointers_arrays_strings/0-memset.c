#include <stdio.h>
#include "main.h"

/**
 * _memset - function to fill memory in a string
 * Just for fun
 * @s : empty string space
 * @b : char
 * @n : int
 * Return: str s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
