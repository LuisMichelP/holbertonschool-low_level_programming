#include <stdio.h>
#include "main.h"

/**
 * times_table - times table function
 * times table function 0 - 9
 * Return: int
 */

void times_table(void)
{
	int i;
	int x;
	int r;

	for (i = 0; i <= 9; i++)
		{
		for (x = 0; x <= 9; x++)
			{
				_putchar(',');
				_putchar(32);
				r = i * x;
				if (r > 9)
				{
					_putchar('0' + (c / 10));
					_putchar('0' + (c % 10));
				}
				else
				{
					_putchar(32);
					_putchar('0' + (i * x));
				}
			}
		_putchar('\n');
		}
}
