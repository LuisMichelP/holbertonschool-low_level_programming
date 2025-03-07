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
	unsigned int i;

	for (i = 0; i <= strlen(s); i++)
	{
		if (s[i] == c)
		{
			return (*s[i]);
		}
		if else (i == strlen(s))
			return (NULL);
	}
}
