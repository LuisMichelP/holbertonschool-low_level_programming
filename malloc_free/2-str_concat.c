#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Pointer to new concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *rep;
	unsigned int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for concatenated string plus null terminator */
	rep = malloc(sizeof(char) * (len1 + len2 + 1));

	if (rep == NULL)
		return (NULL);

	/* Copy s1 into rep */
	for (i = 0; i < len1; i++)
		rep[i] = s1[i];

	/* Copy s2 into rep */
	for (i = 0; i < len2; i++)
		rep[len1 + i] = s2[i];

	/* Null terminate the concatenated string */
	rep[len1 + len2] = '\0';

	return (rep);
}
