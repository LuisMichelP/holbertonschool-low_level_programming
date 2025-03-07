#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print numbers 10 times
 *
 * prints 10 times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
		i++;
	}
}