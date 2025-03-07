#include <stdio.h>
#include "main.h"

/**
 * _strspn - function to search
 *
 * function to search into a char
 *
 * @s: base string
 * @accept: search string
 *
 * Return: int c
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == j[i])
				c++;
		}
	}

	return (c);
}
