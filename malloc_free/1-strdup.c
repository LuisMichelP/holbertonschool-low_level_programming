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

	t = malloc(sizeof(char) * sizeof(str));

	if (t == NULL)
		return (NULL);
	
	for (i = 0; (str[i] <= '\0'); i++)
	{
		t[i] = str[i];
		i++
	}
		
	return (t);
}
