#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: int
 *
 * function that retusn the last digti
 *
 * Return: Always last digit (Success)
 */

int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = c * (-1);
		_putchar('0' + c);
		return (c);
	}
	else
	{
		_putchar('0' + c);
		return (c);
	}
}
