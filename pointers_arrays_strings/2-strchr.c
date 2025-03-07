#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - search function
 *
 * function to search a character in a string
 *
 * @s: string to search in
 * @c: char to search
 *
 * Return: a pointer to the char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != '\0') & (s[i] != c); i++)
	{
		if ((s[i] == '\0') & (c != '\0'))
			return (NULL);
	}
	return (s + i);
}
