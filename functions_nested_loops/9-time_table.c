#include <stdio.h>
#include "main.h"

/**
 * times_table - times table function
 * times table function 0 - 9
 * Return: int
 */

void time_table(void)
{
	int i;
	int x;
	int r;

	for (i = 0; i <= 9; i++)
		{
		for (x = 0; x <= 9; x++)
			{
				r = i * x;
				_putchar(r + ',');
				_putchar(' ');
			}
		_putchar('\n');
		}
}
