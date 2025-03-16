#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function
 *
 * Function to concat 2 strings
 *
 * @s1: str
 * @s2: str
 *
 * Return: rep
 */

char *str_concat(char *s1, char *s2)
{
	char *rep;
	unsigned int i, len1 = 0, len2 = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	rep = malloc(sizeof(char) * len1 * len2);

	if (rep == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		rep[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		rep[len1 + i] = s2[i];
	}

	return (rep);
}