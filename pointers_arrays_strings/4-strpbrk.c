#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - first string func
 *
 * First char to appear function
 *
 * @s: str
 * @accept: str
 *
 * Return: Null or s[i]
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (*s[i]);
		}
	}

	return (NULL);
}
