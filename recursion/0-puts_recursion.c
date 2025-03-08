#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - print a line
 *
 * print like function
 *
 * @s: car array, string
 *
 * Return: 0 if success
 */

void _puts_recursion(char *s)
{
	unsigned int i;

	for (i = 0; s[i] == '\0'; i++)
	{
		if (s[i] != '\0')
		{
			_putchar(s[i]);
		}
		else if (s[i] == '\0')
		{
			_putchar('\n');
		}
	}
}
