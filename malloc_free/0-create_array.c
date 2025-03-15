#include <stdio.h>
#include "main.h"

/**
 * create_array - function
 *
 * Function to create a string
 *
 * @size: int (size of the buffer)
 * @c: char (placeholder char)
 *
 * Return: s char array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(s) * size);

	if (size == 0)
		return (NULL);

	for (i = 0; i <= size; i++)
	{
		if (s == NULL)
			return (NULL);
        s[i] = c;
	}

	return (s);
}
