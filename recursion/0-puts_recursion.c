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
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
