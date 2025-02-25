#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print function
 * function to print
 * Return: 0 if success
 */

void print_alphabet(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
		for (a = 0; a < 26; a++)
			_putchar(97 + a);
		_putchar('\n');
}
