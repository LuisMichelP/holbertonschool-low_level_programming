#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers
 * prints numbers
 * Return: 0
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
			i++;
		else
		{
			_putchar('0' + i);
			i++;
		}
	}
	_putchar('\n');
}