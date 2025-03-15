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
	
	for (i = 0; (str[i] <= '\0'); i++)
	{
		t = malloc(sizeof(char) * i);
		if (t == NULL)
			return (NULL);
		t[i] = str[i];
		i++;
	}
		
	return (t);
}
