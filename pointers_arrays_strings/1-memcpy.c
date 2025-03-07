#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copy funct
 *
 * copy from a destiny to a source
 *
 * @dest: destination memory space
 * @src: source memory space
 * @n: n number of characters to copy
 *
 * Return: dest array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*dest[i] = *src[i];

	return (dest);
}
