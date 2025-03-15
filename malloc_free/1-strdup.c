#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function
 *
 * @str: string
 *
 * Return: t
 */

char *_strdup(char *str)
{
	char *t;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	t = malloc(sizeof(char) * (str));
	if (t == NULL)
		return (NULL);
	
	t[] = str
	return (t);
}
