#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print function
 * function to print
 * Return: 0 if success
 */

void print_alphabet_x10(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a < 26; a++)
			_putchar(97 + a);
		_putchar('\n');
		i++;
	}
}
